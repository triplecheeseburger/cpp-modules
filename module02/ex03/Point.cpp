/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakim <hakim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 23:37:36 by hakim             #+#    #+#             */
/*   Updated: 2022/05/14 23:37:37 by hakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Point.hpp"

Fixed Point::getX(void) const
{
	return x;
}

Fixed Point::getY(void) const
{
	return y;
}

Point::Point():
	x(0), y(0)
{}

Point::Point(const Fixed x, const Fixed y):
	x(x), y(y)
{}

Point::Point(const float x, const float y):
	x(Fixed(x)), y(Fixed(y))
{}

Point::Point(const int x, const int y):
	x(Fixed(x)), y(Fixed(y))
{}

Point::Point(const Point& origin):
	x(origin.x), y(origin.y)
{}

Point& Point::operator=(const Point &point)
{
	const_cast<Fixed&>(x) = point.x;
	const_cast<Fixed&>(y) = point.y;
	return *this;
}

Point::~Point() {}


