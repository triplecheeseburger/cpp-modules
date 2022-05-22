/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakim <hakim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 01:54:03 by hakim             #+#    #+#             */
/*   Updated: 2022/05/22 01:54:05 by hakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM
# define SHRUBBERYCREATIONFORM

# include <fstream>
# include "Form.hpp"

class ShrubberyCreationForm: public Form {

private:
	std::string 		target;

	static const int	grade_to_be_signed = 145;
	static const int	grade_to_be_executed = 137;

	ShrubberyCreationForm();

public:
	void	execute(const Bureaucrat& bureaucrat) const;

	explicit ShrubberyCreationForm(const std::string& target);
	ShrubberyCreationForm(const ShrubberyCreationForm& origin);
	ShrubberyCreationForm& operator=(const ShrubberyCreationForm& origin);
	~ShrubberyCreationForm();

	class FileOpeningFailureException: public std::exception {
	public:
		const char* what() const throw();
	};
};

#endif
