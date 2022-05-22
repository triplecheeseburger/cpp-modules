/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakim <hakim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 01:41:24 by hakim             #+#    #+#             */
/*   Updated: 2022/05/23 01:41:27 by hakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN
# define INTERN

# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class Intern {

public:
	Form* makeForm(const std::string& form_name, const std::string& target) const;

	Intern();
	Intern(const Intern& origin);
	Intern& operator=(const Intern& origin);
	~Intern();

	class NoSuchFormException: public std::exception {
	public:
		const char* what() const throw();
	};
};

#endif
