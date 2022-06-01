/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakim <hakim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 12:41:20 by hakim             #+#    #+#             */
/*   Updated: 2022/05/21 12:41:21 by hakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

const std::string &Form::getName() const
{
	return name;
}

bool Form::getIsSigned() const
{
	return is_signed;
}

const int &Form::getGradeToSign() const
{
	return grade_to_sign;
}

const int &Form::getGradeToExec() const
{
	return grade_to_exec;
}

void Form::beSigned(const Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() <= grade_to_sign)
		is_signed = true;
	else
		throw GradeTooLowException();
}

void Form::isExecutable(const Bureaucrat& bureaucrat) const
{
	if (this->getIsSigned() == false)
		throw FormWithoutSignException();
	if (grade_to_exec < bureaucrat.getGrade())
		throw YouHaveNoPermissionException();
}

Form::Form(): name(""), is_signed(false), grade_to_sign(Form::grade_top), grade_to_exec(Form::grade_top) {}

Form::Form(const std::string &name, const int &grade_to_sign, const int &grade_to_exec)
		:name(name), is_signed(false), grade_to_sign(grade_to_sign), grade_to_exec(grade_to_exec)
{
	if (grade_to_exec < Form::grade_top || grade_to_sign < Form::grade_top)
		throw GradeTooHighException();
	if (grade_to_exec > Form::grade_bottom || grade_to_sign > Form::grade_to_sign)
		throw GradeTooLowException();
}

Form::Form(const Form &origin): name(origin.name), is_signed(origin.is_signed), grade_to_sign(origin.grade_to_sign), grade_to_exec(origin.grade_to_exec)
{
	if (grade_to_exec < Form::grade_top || grade_to_sign < Form::grade_top)
		throw GradeTooHighException();
	if (grade_to_exec > Form::grade_bottom || grade_to_sign > Form::grade_bottom)
		throw GradeTooLowException();
}

Form &Form::operator=(const Form &origin)
{
	*(const_cast<std::string*>(&name)) = origin.name;
	is_signed = origin.is_signed;
	*(const_cast<int*>(&grade_to_sign)) = origin.grade_to_sign;
	*(const_cast<int*>(&grade_to_exec)) = origin.grade_to_exec;

	return *this;
}

Form::~Form() {}

const char *Form::GradeTooHighException::what() const throw()
{
	return "Grade Too High: the grade can't be higher than 1.";
}

const char *Form::GradeTooLowException::what() const throw()
{
	return "Grade Too Low: the grade can't be lower than 150.";
}

const char *Form::FormWithoutSignException::what() const throw()
{
	return "Form is not signed: Please get the signature first.";
}

const char *Form::YouHaveNoPermissionException::what() const throw()
{
	return "You have no permission to execute this form.";
}

std::ostream& operator<<(std::ostream& out, Form& form)
{
	return out << "<Form> name: " << form.getName()
			   << ", is_signed: " << form.getIsSigned()
			   << ", grade to sign: " << form.getGradeToSign()
			   << ", grade to exec: " << form.getGradeToExec()
			   << ".";
}