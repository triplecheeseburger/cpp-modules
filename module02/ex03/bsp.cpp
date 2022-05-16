/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakim <hakim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 23:37:46 by hakim             #+#    #+#             */
/*   Updated: 2022/05/14 23:37:47 by hakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

static int count_contact(Point const p1, Point const p2, Point const ref)
{
	Fixed	contact_x;

	if (p1.getY() > ref.getY() != p2.getY() > ref.getY())
	{
		if (p2.getX() == p1.getX())
			contact_x = p2.getX();
		else if (p2.getY() == p1.getY())
			contact_x = p2.getY();
		else
			contact_x = p1.getX() + (ref.getY() - p1.getY()) / ((p2.getY() - p1.getY()) / (p2.getX() - p1.getX()));
		if (contact_x > ref.getX())
			return (1);
	}
	return (0);
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	int		times_contacted = 0;

	times_contacted = count_contact(a, b, point) + count_contact(b, c, point) + count_contact(c, a, point);
	return (times_contacted == 1);
}
