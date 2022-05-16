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
	Point	b(20, 0);
	Point	c(10, 30);
	Point	in(10, 15);
	Point	out(30, 50);

	std::cout << "Point \"in\" created at x-" << in.getX() << " y-" << in.getY() << std::endl;
	std::cout << "Point \"out\" created at x-" << out.getX() << " y-" << out.getY() << std::endl;
	if (bsp(a, b, c, in))
		std::cout << "\"in\" is in the triangle" << std::endl;
	else
		std::cout << "\"in\" is out of the triangle" << std::endl;
	if (bsp(a, b, c, out))
		std::cout << "\"out\" is in the triangle" << std::endl;
	else
		std::cout << "\"out\" is out of the triangle" << std::endl;
	return 0;
}