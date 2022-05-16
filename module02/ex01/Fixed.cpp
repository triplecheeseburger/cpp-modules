/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakim <hakim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 16:17:00 by hakim             #+#    #+#             */
/*   Updated: 2022/05/13 16:17:01 by hakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int Fixed::getRawBits(void) const
{
	return fixed_point_val;
}

void Fixed::setRawBits(const int raw)
{
	fixed_point_val = raw;
}

Fixed::Fixed()
{
	std::cout << "Default constructor called." << std::endl;
	fixed_point_val = 0;
}

Fixed::~Fixed()
{
	std::cout << this->toFloat() << std::endl;
	std::cout << "Destructor called." << std::endl;
}

Fixed::Fixed(const Fixed &origin)
{
	std::cout << "Copy constructor called." << std::endl;
	*this = origin;
}

Fixed& Fixed::operator=(const Fixed &fixed)
{
	std::cout << "Copy assignment constructor called." << std::endl;
	fixed_point_val = fixed.getRawBits();
	return (*this);
}

Fixed::Fixed(const int i):
	fixed_point_val(i << fractional_bits)
{
	std::cout << "Int constructor called." << std::endl;
}

Fixed::Fixed(const float f):
	fixed_point_val(static_cast<int>(roundf(f * (1 << fractional_bits))))
{
	std::cout << "Float point constructor called." << std::endl;
}

int Fixed::toInt() const
{
	return fixed_point_val >> fractional_bits;
}

float Fixed::toFloat() const
{
	return static_cast<float>(fixed_point_val) / (1 << fractional_bits);
}

std::ostream& operator<<(std::ostream& out, const Fixed& fixed)
{
	return out << fixed.toFloat();
}