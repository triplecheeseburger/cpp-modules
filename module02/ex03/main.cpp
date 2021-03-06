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
#include <iostream>
#include "Point.hpp"

int	main(void)
{
	Point	a(0, 0);
	Point	b(10, 0);
	Point	c(0, 10);
	Point	point1(3, 3);
	Point	point2(5, 5);

	std::cout << "point1 is located " << (bsp(a, b, c, point1) ? "inside" : "outside") << " of the triangle abc." << std::endl;
	std::cout << "point2 is located " << (bsp(a, b, c, point2) ? "inside" : "outside") << " of the triangle abc." << std::endl;
	return 0;
}