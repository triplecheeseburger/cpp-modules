/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakim <hakim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 01:41:28 by hakim             #+#    #+#             */
/*   Updated: 2022/05/23 01:41:29 by hakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Form *Intern::makeForm(const std::string &form_name, const std::string &target) const
{
	std::string requests[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	Form* result = NULL;
	Form* forms[3] = {new ShrubberyCreationForm(target), new RobotomyRequestForm(target), new PresidentialPardonForm(target)};
	try {
		for (int i = 0; i < 3; i++) {
			if (form_name == requests[i])
				result = forms[i];
			else
				delete forms[i];
		}
		if (result == NULL)
			throw NoSuchFormException();
		std::cout << "Intern creates " << form_name << std::endl;
	} catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
	}
	return result;
}

Intern::Intern() {}

Intern::Intern(const Intern &origin) { static_cast<void>(origin);}

Intern &Intern::operator=(const Intern &origin)
{
	static_cast<void>(origin);
	return *this;
}

Intern::~Intern() {}

const char *Intern::NoSuchFormException::what() const throw()
{
	return "Poor intern failed to find such form.";
}
