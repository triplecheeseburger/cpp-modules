/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakim <hakim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 10:32:53 by hakim             #+#    #+#             */
/*   Updated: 2022/05/21 10:32:55 by hakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT
# define BUREAUCRAT

# include <exception>
# include <iostream>

class Form;

class Bureaucrat {

private:
	const std::string	name;
	int					grade;

	static const int	grade_top = 1;
	static const int	grade_bottom = 150;

public:
	const std::string&	getName() const;
	int 				getGrade() const;
	void 				gradePlusPlus();
	void 				gradeMinusMinus();
	void 				signForm(Form& form) const;
	void 				executeForm(Form &form) const;

	Bureaucrat();
	Bureaucrat(const std::string &name, int grade);
	Bureaucrat(const Bureaucrat& origin);
	Bureaucrat& operator=(const Bureaucrat& origin);
	~Bureaucrat();

class GradeTooHighException: public std::exception {
public:
	const char* what() const throw();
	};

class GradeTooLowException: public std::exception {
public:
	const char* what() const throw();
	};
};

std::ostream& operator<<(std::ostream& out, Bureaucrat& bureaucrat);

#endif

