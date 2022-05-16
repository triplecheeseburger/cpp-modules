/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakim <hakim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 23:37:32 by hakim             #+#    #+#             */
/*   Updated: 2022/05/14 23:37:33 by hakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class Point {

private:
	const Fixed	x;
	const Fixed y;

public:
	Fixed	getX(void) const;
	Fixed	getY(void) const;
	Point();
	Point(const Fixed x, const Fixed y);
	Point(const float x, const float y);
	Point(const int x, const int y);
	Point(const Point& origin);
	Point& operator=(const Point& point);
	~Point();
};

bool bsp(Point const a, Point const b, Point const c, Point const point);

#endif
