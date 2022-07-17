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

	ShrubberyCreationForm scf1("marvin's home");
	Form* scf2 = new ShrubberyCreationForm("hakim's home");
	RobotomyRequestForm rrf1("marvin");
	Form* rrf2 = new RobotomyRequestForm("hakim");
	PresidentialPardonForm ppf1("marvin");
	Form* ppf2 = new PresidentialPardonForm("hakim");

	arthur.signForm(scf1);
	std::cout << (scf1.getIsSigned() ? "true" : "false") << std::endl;
	std::cout << std::endl;
	arthur.signForm(*scf2);
	std::cout << (scf2->getIsSigned() ? "true" : "false") << std::endl;
	std::cout << std::endl;
	arthur.signForm(rrf1);
	std::cout << (rrf1.getIsSigned() ? "true" : "false") << std::endl;
	std::cout << std::endl;
	arthur.signForm(*rrf2);
	std::cout << (rrf2->getIsSigned() ? "true" : "false") << std::endl;
	std::cout << std::endl;
	arthur.signForm(ppf1);
	std::cout << (ppf1.getIsSigned() ? "true" : "false") << std::endl;
	std::cout << std::endl;
	arthur.signForm(*ppf2);
	std::cout << (ppf2->getIsSigned() ? "true" : "false") << std::endl;
	std::cout << std::endl;
	try {
		hakim.executeForm(scf1);
		std::cout << std::endl;
		ford.executeForm(scf1);
		std::cout << std::endl;
		arthur.executeForm(scf1);
		std::cout << std::endl;
		hakim.executeForm(*scf2);
		std::cout << std::endl;
		ford.executeForm(*scf2);
		std::cout << std::endl;
		arthur.executeForm(*scf2);
		std::cout << std::endl;

		hakim.executeForm(rrf1);
		std::cout << std::endl;
		ford.executeForm(rrf1);
		std::cout << std::endl;
		arthur.executeForm(rrf1);
		std::cout << std::endl;
		hakim.executeForm(*rrf2);
		std::cout << std::endl;
		ford.executeForm(*rrf2);
		std::cout << std::endl;
		arthur.executeForm(*rrf2);
		std::cout << std::endl;

		hakim.executeForm(ppf1);
		std::cout << std::endl;
		ford.executeForm(ppf1);
		std::cout << std::endl;
		arthur.executeForm(ppf1);
		std::cout << std::endl;
		hakim.executeForm(*ppf2);
		std::cout << std::endl;
		ford.executeForm(*ppf2);
		std::cout << std::endl;
		arthur.executeForm(*ppf2);
		std::cout << std::endl;
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	delete scf2;
	delete rrf2;
	delete ppf2;

//	system("leaks ex02");
	return 0;
}
