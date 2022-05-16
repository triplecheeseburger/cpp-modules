/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakim <hakim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 16:16:45 by hakim             #+#    #+#             */
/*   Updated: 2022/05/13 16:16:46 by hakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Fixed.hpp"
#include <iostream>

int main( void )
{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;

	std::cout << --a << std::endl;
	std::cout << a << std::endl;
	std::cout << a-- << std::endl;
	std::cout << a << std::endl;
	Fixed c = Fixed(12.5f);
	std::cout << c << std::endl;
	Fixed d = Fixed(25);
	std::cout << d << std::endl;
	std::cout << c + d << std::endl;
	std::cout << c - d << std::endl;
	std::cout << d - c << std::endl;
	std::cout << c / d << std::endl;
	std::cout << c * d << std::endl;
	Fixed e(c);
	std::cout << (c < e) << " " << (c < d) << " " << (d < c) << std::endl;
	std::cout << (c > e) << " " << (c > d) << " " << (d > c) << std::endl;
	std::cout << (c <= e) << " " << (c <= d) << " " << (d <= c) << std::endl;
	std::cout << (c >= e) << " " << (c >= d) << " " << (d >= c) << std::endl;
	std::cout << (c == e) << " " << (c == d) << " " << (d == c) << std::endl;
	std::cout << (c != e) << " " << (c != d) << " " << (d != c) << std::endl;
	std::cout << Fixed::min(c, d) << std::endl;
}
