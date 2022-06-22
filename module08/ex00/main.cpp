/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakim <hakim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 17:50:47 by hakim             #+#    #+#             */
/*   Updated: 2022/06/04 17:50:48 by hakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <vector>
#include <list>
#include <deque>
#include <iostream>
#include "easyfind.hpp"

int main(void) {
	std::vector<int>	vec;
	std::list<int>		lst;
	std::deque<int>		deq;

	for (int i = 1; i <= 10; i++) {
		vec.push_back(i);
		lst.push_back(i + 10);
		deq.push_back(i + 20);
	}
	try {
		std::cout << "I found " << *(easyfind(vec, 5)) << std::endl;
		easyfind(vec, 11);
	} catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
	}
	try {
		std::cout << "I found " << *(easyfind(lst, 15)) << std::endl;
		easyfind(lst, 5);
	} catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
	}
	try {
		std::cout << "I found " << *(easyfind(deq, 22)) << std::endl;
		easyfind(deq, -2);
	} catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
	}
}
