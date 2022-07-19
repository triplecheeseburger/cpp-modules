/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakim <hakim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 17:51:07 by hakim             #+#    #+#             */
/*   Updated: 2022/06/04 17:51:08 by hakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>

void subjectTest(void) {
	std::cout << "===subjectTest===" << std::endl;
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
}

int main(void) {
	subjectTest();
	Span span(10000);
	std::srand(std::time(NULL));
	for (int i = 0; i < 10000; i++)
		span.addNumber(rand());
	std::cout << "===randomTest===" << std::endl;
	std::cout << "shortest span: " << span.shortestSpan() << std::endl;
	std::cout << "longest span: " << span.longestSpan() << std::endl;
	try {
		span.addNumber(42);
	} catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << "===errorTest===" << std::endl;
	Span newSpan(10000);
	try {
		newSpan.shortestSpan();
		newSpan.longestSpan();
	} catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
	}
	newSpan.addNumber(42);
	try {
		newSpan.shortestSpan();
		newSpan.longestSpan();
	} catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
	}
	newSpan.addNumber(84);
	try {
		std::cout << "shortest span: " << newSpan.shortestSpan() << std::endl;
		std::cout << "longest span: " << newSpan.longestSpan() << std::endl;
	} catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
	}
	for (int i = 2; i < 10000; i++)
		newSpan.addNumber(i);
	std::cout << "shortest span: " << newSpan.shortestSpan() << std::endl;
	std::cout << "longest span: " << newSpan.longestSpan() << std::endl;

	std::cout << "===iteratorTest===" << std::endl;
	Span itSpan(10);
	std::vector<int> vec1;
	std::vector<int> vec2;
	for (int i = 0; i < 10; i++)
		vec1.push_back(i);
	itSpan.addByIterator(vec1.begin(), vec1.end());
	std::cout << "shortest span: " << itSpan.shortestSpan() << std::endl;
	std::cout << "longest span: " << itSpan.longestSpan() << std::endl;
	vec2.push_back(42);
	try {
		itSpan.addByIterator(vec2.begin(), vec2.end());
	} catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
	}
	return 0;
}
