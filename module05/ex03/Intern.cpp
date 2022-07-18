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
	try {
		for (int i = 0; i < 3; i++) {
			if (form_name == requests[i]) {
				std::cout << "Intern creates " << form_name << std::endl;
				switch (i) {
					case 0:
						return new ShrubberyCreationForm(target);
					case 1:
						return new RobotomyRequestForm(target);
					case 2:
						return new PresidentialPardonForm(target);
				}
			}
		}
		throw NoSuchFormException();
	} catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
	}
	return NULL;
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
