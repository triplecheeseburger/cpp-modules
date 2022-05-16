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
	std::cout << "getRawBits member function called." << std::endl;
	return fixed_point_val;
}

void Fixed::setRawBits(const int raw)
{
	std::cout << "setRawBits member function called." << std::endl;
	fixed_point_val = raw;
}

Fixed::Fixed()
{
	std::cout << "Default constructor called." << std::endl;
	fixed_point_val = 0;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called." << std::endl;
}

Fixed::Fixed(const Fixed &origin)
{
	std::cout << "Copy constructor called." << std::endl;
	*this = origin;
}

Fixed &Fixed::operator=(const Fixed &fixed)
{
	std::cout << "Copy assignment constructor called." << std::endl;
	fixed_point_val = fixed.getRawBits();
	return (*this);
}

/*Fixed::Fixed(const Fixed &origin): fixed_point_val(origin.getRawBits())
{
	std::cout << "Copy constructor called." << std::endl;
}*/
