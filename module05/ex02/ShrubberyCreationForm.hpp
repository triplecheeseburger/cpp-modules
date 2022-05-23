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

# define SHRUB_GRADE_TO_BE_SIGNED 145
# define SHRUB_GRADE_TO_BE_EXECED 137

class ShrubberyCreationForm: public Form {

private:
	std::string 		target;

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
