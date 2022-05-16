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

class Fixed {

private:
	int					fixed_point_val;
	static const int	fractional_bits = 8;

public:
	int		getRawBits(void) const;
	void	setRawBits(const int raw);

	Fixed();
	Fixed(const Fixed& origin);
	Fixed& operator=(const Fixed& fixed);
	~Fixed();
};

#endif