/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakim <hakim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 16:16:54 by hakim             #+#    #+#             */
/*   Updated: 2022/05/13 16:16:55 by hakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {

private:
	int					fixed_point_val;
	static const int	fractional_bits = 8;

public:
	int		getRawBits(void) const;
	void	setRawBits(const int raw);
	int 	toInt() const;
	float	toFloat() const;

	bool	operator>(const Fixed& other);
	bool	operator<(const Fixed& other);
	bool	operator>=(const Fixed& other);
	bool	operator<=(const Fixed& other);
	bool	operator==(const Fixed& other);
	bool	operator!=(const Fixed& other);

	Fixed operator+(const Fixed& other);
	Fixed operator-(const Fixed& other);
	Fixed operator*(const Fixed& other);
	Fixed operator/(const Fixed& other);

	Fixed& operator++(void);
	Fixed& operator--(void);
	Fixed operator++(int);
	Fixed operator--(int);

	static Fixed& min(Fixed& fixed1, Fixed& fixed2);
	static Fixed& max(Fixed& fixed1, Fixed& fixed2);
	static const Fixed& min(const Fixed& fixed1, const Fixed& fixed2);
	static const Fixed& max(const Fixed& fixed1, const Fixed& fixed2);

	Fixed();
	explicit Fixed(const int i);
	explicit Fixed(const float f);
	Fixed(const Fixed& origin);
	Fixed& operator=(const Fixed& fixed);
	~Fixed();
};

std::ostream& operator<<(std::ostream& out, const Fixed& fixed);

#endif