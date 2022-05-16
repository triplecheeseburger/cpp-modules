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
	fixed_point_val = 0;
}

Fixed::~Fixed()
{
}

Fixed::Fixed(const Fixed &origin)
{
	*this = origin;
}

Fixed& Fixed::operator=(const Fixed &fixed)
{
	fixed_point_val = fixed.getRawBits();
	return (*this);
}

Fixed::Fixed(const int i):
	fixed_point_val(i << fractional_bits) {}

Fixed::Fixed(const float f):
	fixed_point_val(static_cast<int>(roundf(f * (1 << fractional_bits)))) {}

int Fixed::toInt() const
{
	return fixed_point_val >> fractional_bits;
}

float Fixed::toFloat() const
{
	return static_cast<float>(fixed_point_val) / (1 << fractional_bits);
}

bool Fixed::operator>(const Fixed& other)
{
	return fixed_point_val > other.getRawBits();
}

bool Fixed::operator<(const Fixed& other)
{
	return fixed_point_val < other.getRawBits();
}

bool Fixed::operator>=(const Fixed& other)
{
	return fixed_point_val >= other.getRawBits();
}

bool Fixed::operator<=(const Fixed& other)
{
	return fixed_point_val <= other.getRawBits();
}

bool Fixed::operator==(const Fixed& other)
{
	return fixed_point_val == other.getRawBits();
}

bool Fixed::operator!=(const Fixed& other)
{
	return fixed_point_val != other.getRawBits();
}

Fixed Fixed::operator+(const Fixed& other)
{
	Fixed result;

	result.setRawBits(fixed_point_val + other.getRawBits());
	return result;
}

Fixed Fixed::operator-(const Fixed& other)
{
	Fixed result;

	result.setRawBits(fixed_point_val - other.getRawBits());
	return result;
}

Fixed Fixed::operator*(const Fixed& other)
{
	Fixed result;

	result.setRawBits(fixed_point_val * other.getRawBits() / (1 << fractional_bits));
	return result;
}

Fixed Fixed::operator/(const Fixed& other)
{
	Fixed result;

	if (other.getRawBits() == 0)
	{
		std::cerr << "Error: divided by zero" << std::endl;
		return (result);
	}
	result.setRawBits(fixed_point_val / (other.getRawBits() / (1 << fractional_bits)));
	return result;
}

Fixed& Fixed::operator++(void)
{
	++fixed_point_val;
	return *this;
}

Fixed& Fixed::operator--(void)
{
	--fixed_point_val;
	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed result = *this;

	++fixed_point_val;
	return result;
}

Fixed Fixed::operator--(int)
{
	Fixed result = *this;

	--fixed_point_val;
	return result;
}

Fixed& Fixed::min(Fixed &fixed1, Fixed &fixed2)
{
	if (fixed1.getRawBits() < fixed2.getRawBits())
		return fixed1;
	return fixed2;
}

Fixed& Fixed::max(Fixed &fixed1, Fixed &fixed2)
{
	if (fixed1.getRawBits() > fixed2.getRawBits())
		return fixed1;
	return fixed2;
}

const Fixed& Fixed::min(const Fixed &fixed1, const Fixed &fixed2)
{
	if (fixed1.getRawBits() < fixed2.getRawBits())
		return fixed1;
	return fixed2;
}

const Fixed& Fixed::max(const Fixed &fixed1, const Fixed &fixed2)
{
	if (fixed1.getRawBits() > fixed2.getRawBits())
		return fixed1;
	return fixed2;
}

std::ostream& operator<<(std::ostream& out, const Fixed& fixed)
{
	return out << fixed.toFloat();
}