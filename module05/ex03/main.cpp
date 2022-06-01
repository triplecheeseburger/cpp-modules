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
#include "Intern.hpp"

int main(void)
{
	Intern hakim = Intern();
	Bureaucrat arthur = Bureaucrat("Arthur Dent", 1);

	Form* scf = hakim.makeForm("shrubbery creation", "hakim's home");
	Form* rrf = hakim.makeForm("robotomy request", "hakim");
	Form* ppf = hakim.makeForm("presidential pardon", "hakim");
	hakim.makeForm("assassination request", "hakim");

	arthur.signForm(*scf);
	arthur.executeForm(*scf);

	arthur.signForm(*rrf);
	arthur.executeForm(*rrf);

	arthur.signForm(*ppf);
	arthur.executeForm(*ppf);

	delete scf;
	delete rrf;
	delete ppf;
	return 0;
}
