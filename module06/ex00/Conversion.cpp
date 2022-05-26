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
	return static_cast<double>(value);
}

void Conversion::print(void) const
{

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

Conversion::Conversion(const Conversion &origin)
{

}

Conversion &Conversion::operator=(const Conversion &origin)
{

}

Conversion::~Conversion()
{

}

