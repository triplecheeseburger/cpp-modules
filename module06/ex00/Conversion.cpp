/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakim <hakim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 11:17:09 by hakim             #+#    #+#             */
/*   Updated: 2022/05/25 11:17:10 by hakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Conversion.hpp"

char Conversion::toChar(void) const
{
	return static_cast<char>(value);
}

int Conversion::toInt(void) const
{
	return static_cast<int>(value);
}

float Conversion::toFloat(void) const
{
	return static_cast<float>(value);
}

double Conversion::toDouble(void) const
{
	return value;
}

void Conversion::print(void) const
{
	if (error) {
		std::cout << "Failed to convert the input." << std::endl;
		return ;
	}
	std::cout << "char: ";
	if (value > CHAR_MAX || value < CHAR_MIN || value != value)
		std::cout << "impossible" << std::endl;
	else if (toChar() >= 32 && toChar() < 127)
		std::cout << "'" << toChar() << "'" << std::endl;
	else
		std::cout << "Non displayable" << std::endl;

	std::cout << "int: ";
	if (value > INT_MAX || value < INT_MIN || value != value)
		std::cout << "impossible" << std::endl;
	else
		std::cout << toInt() << std::endl;

	std::cout << "float: ";
	if (toFloat() == static_cast<int64_t>(toFloat()))
		std::cout << toFloat() << ".0f" << std::endl;
	else
		std::cout << std::setprecision(std::numeric_limits<float>::digits10) << toFloat() << "f" << std::endl;

	std::cout << "double: ";
	if (toDouble() == static_cast<int64_t>(toDouble()))
		std::cout << toFloat() << ".0" << std::endl;
	else
		std::cout << std::setprecision(std::numeric_limits<float>::digits10) << toDouble() << std::endl;
}

Conversion::Conversion(): error(false), value(0.0)
{}

Conversion::Conversion(std::string str): error(false)
{
	try {
		char *endptr = NULL;
		const char *cstr = str.c_str();
		value = std::strtod(cstr, &endptr);
		if (value == 0.0 && cstr[0] != '-' && cstr[0] != '+' && std::isdigit(cstr[0] == 0))
			throw std::bad_cast();
		if (*endptr != '\0' && std::strcmp(endptr, "f") != 0)
			throw std::bad_cast();
	} catch (std::exception & e) {
		error = true;
	}
}

Conversion::Conversion(const Conversion &origin): error(origin.error), value(origin.value) {}

Conversion &Conversion::operator=(const Conversion &origin)
{
	error = origin.error;
	value = origin.value;
	return *this;
}

Conversion::~Conversion() {}

