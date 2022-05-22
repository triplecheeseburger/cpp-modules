/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakim <hakim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 01:54:05 by hakim             #+#    #+#             */
/*   Updated: 2022/05/22 01:54:06 by hakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ShrubberyCreationForm.hpp"

void ShrubberyCreationForm::execute(const Bureaucrat &bureaucrat) const
{
	isExecutable(bureaucrat);

	std::ofstream outFile;
	outFile.open(target + "_shrubbery");
	if (!outFile.good())
		throw FileOpeningFailureException();
	std::string shrubbery = "               ,@@@@@@@,\n"
							"       ,,,.   ,@@@@@@/@@,  .oo8888o.\n"
							"    ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o\n"
							"   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'\n"
							"   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'\n"
							"   %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'\n"
							"   `&%\\ ` /%&'    |.|        \\ '|8'\n"
							"       |o|        | |         | |\n"
							"       |.|        | |         | |\n"
							"jgs \\\\/ ._\\//_/__/  ,\\_//__\\\\/.  \\_//__/_";
	outFile << shrubbery;
	outFile.close();
}

ShrubberyCreationForm::ShrubberyCreationForm():
	Form("ShrubberyCreationForm", grade_to_be_signed, grade_to_be_executed), target("No Target")
{}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target):
	Form("ShrubberyCreationForm", grade_to_be_signed, grade_to_be_executed), target(target)
{}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &origin):
	Form(origin), target(origin.target)
{}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &origin)
{
	Form::operator=(origin);
	target = origin.target;
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

const char *ShrubberyCreationForm::FileOpeningFailureException::what() const throw()
{
	return "Failed to Open file.";
}
