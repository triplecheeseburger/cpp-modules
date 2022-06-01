/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakim <hakim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 12:41:19 by hakim             #+#    #+#             */
/*   Updated: 2022/05/21 12:41:20 by hakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM
# define FORM

# include <exception>
# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form {

private:
	const std::string	name;
	bool 				is_signed;
	const int			grade_to_sign;
	const int 			grade_to_exec;

	static const int	grade_top = 1;
	static const int	grade_bottom = 150;

public:
	const std::string&	getName() const;
	bool 				getIsSigned() const;
	const int&			getGradeToSign() const;
	const int&			getGradeToExec() const;
	void 				beSigned(const Bureaucrat& bureaucrat);
	void 				isExecutable(const Bureaucrat& bureaucrat) const;
	virtual void		execute(Bureaucrat const & executor) const = 0;

	Form();
	Form(const std::string& name, const int& grade_to_sign, const int& grade_to_exec);
	Form(const Form& origin);
	Form& operator=(const Form& origin);
	virtual ~Form();

	class GradeTooHighException: public std::exception {
	public:
		const char* what() const throw();
	};

	class GradeTooLowException: public std::exception {
	public:
		const char* what() const throw();
	};

	class FormWithoutSignException: public std::exception {
	public:
		const char* what() const throw();
	};

	class YouHaveNoPermissionException: public std::exception {
	public:
		const char* what() const throw();
	};
};

std::ostream& operator<<(std::ostream& out, Form& form);

#endif
