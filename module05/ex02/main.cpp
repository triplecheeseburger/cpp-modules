/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakim <hakim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 10:32:26 by hakim             #+#    #+#             */
/*   Updated: 2022/05/21 10:32:28 by hakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void)
{
	Bureaucrat hakim = Bureaucrat("hakim", 75);
	Bureaucrat ford = Bureaucrat("Ford Prefect", 150);
	Bureaucrat arthur = Bureaucrat("Arthur Dent", 1);

	ShrubberyCreationForm scf1("my home");
	Form* scf2 = new ShrubberyCreationForm("hakim's home");
	RobotomyRequestForm rrf1("my home");
	Form* rrf2 = new RobotomyRequestForm("hakim's home");
	PresidentialPardonForm ppf1("my home");
	Form* ppf2 = new PresidentialPardonForm("hakim's home");

	arthur.signForm(scf1);
	std::cout << (scf1.getIsSigned() ? "true" : "false") << std::endl;
	arthur.signForm(*scf2);
	std::cout << (scf2->getIsSigned() ? "true" : "false") << std::endl;
	arthur.signForm(rrf1);
	std::cout << (rrf1.getIsSigned() ? "true" : "false") << std::endl;
	arthur.signForm(*rrf2);
	std::cout << (rrf2->getIsSigned() ? "true" : "false") << std::endl;
	arthur.signForm(ppf1);
	std::cout << (ppf1.getIsSigned() ? "true" : "false") << std::endl;
	arthur.signForm(*ppf2);
	std::cout << (ppf2->getIsSigned() ? "true" : "false") << std::endl;

	try {

	} catch (std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	return 0;
}
