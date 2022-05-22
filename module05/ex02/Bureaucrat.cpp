/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakim <hakim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 10:32:28 by hakim             #+#    #+#             */
/*   Updated: 2022/05/21 10:32:32 by hakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

const std::string &Bureaucrat::getName() const
{
	return name;
}

int Bureaucrat::getGrade() const
{
	return grade;
}

void Bureaucrat::gradePlusPlus()
{
	if (grade - 1 < Bureaucrat::grade_top)
		throw GradeTooHighException();
	--grade;
}

void Bureaucrat::gradeMinusMinus()
{
	if (grade + 1 > Bureaucrat::grade_bottom)
		throw GradeTooLowException();
	++grade;
}

Bureaucrat::Bureaucrat(): name("Amugae"), grade(150) {}

Bureaucrat::Bureaucrat(const std::string &name, int grade): name(name), grade(grade)
{
	if (grade < Bureaucrat::grade_top)
		throw (GradeTooHighException());
	if (grade  > Bureaucrat::grade_bottom)
		throw GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat &origin): name(origin.name), grade(origin.grade) {}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &origin)
{
	*(const_cast<std::string*>(&name)) = origin.name;
	grade = origin.grade;
	return *this;
}

Bureaucrat::~Bureaucrat() {}

void Bureaucrat::signForm(Form &form) const
{
	try {
		form.beSigned(*this);
		std::cout << name << " signed " << form.getName() << "." << std::endl;
	} catch (std::exception & e) {
		std::cerr << name << " couldn't sign " << form.getName() << " because "
				  << e.what() << std::endl;
	}
}

void Bureaucrat::executeForm(Form &form) const
{
	try {
		form.execute(*this);
		std::cout << name << " executed " << form.getName() << std::endl;
	} catch (std::exception & e) {
		std::cerr << name << " failed to execute " << form.getName() << " because form's " << e.what() << std::endl;
	}
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Grade Too High: the grade can't be higher than 1.";
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Grade Too Low: the grade can't be lower than 150.";
}

std::ostream& operator<<(std::ostream& out, Bureaucrat& bureaucrat)
{
	return out << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << ".";
}