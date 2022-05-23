/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakim <hakim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 01:54:29 by hakim             #+#    #+#             */
/*   Updated: 2022/05/22 01:54:30 by hakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

void PresidentialPardonForm::execute(const Bureaucrat &bureaucrat) const
{
	isExecutable(bureaucrat);
	std::cout << target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm():
		Form("PresidentialPardonForm", PARDON_GRADE_TO_BE_SIGNED, PARDON_GRADE_TO_BE_EXECED), target("No Target")
{}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target):
		Form("PresidentialPardonForm", PARDON_GRADE_TO_BE_SIGNED, PARDON_GRADE_TO_BE_EXECED), target(target)
{}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &origin):
		Form(origin), target(origin.target)
{}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &origin)
{
	Form::operator=(origin);
	target = origin.target;
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm() {}
