/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakim <hakim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 01:54:16 by hakim             #+#    #+#             */
/*   Updated: 2022/05/22 01:54:17 by hakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

int RobotomyRequestForm::seed = 0;

void RobotomyRequestForm::execute(const Bureaucrat &bureaucrat) const
{
	isExecutable(bureaucrat);
	if (seed == 0) {
		std::srand(std::time(NULL));
		seed = 1;
	}
	std::cout << "dodododo...dodododo...drill..." << std::endl;
	if (std::rand() % 2)
		std::cout << target << " has been robotomized successfully." << std::endl;
	else
		std::cout << target << " robotomization has been failed." << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm():
		Form("RobotomyRequestForm", ROBOTOMY_GRADE_TO_BE_SIGNED, ROBOTOMY_GRADE_TO_BE_EXECED), target("No Target")
{}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target):
		Form("RobotomyRequestForm", ROBOTOMY_GRADE_TO_BE_SIGNED, ROBOTOMY_GRADE_TO_BE_EXECED), target(target)
{}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &origin):
		Form(origin), target(origin.target)
{}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &origin)
{
	Form::operator=(origin);
	target = origin.target;
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm() {}

