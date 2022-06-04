/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakim <hakim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 01:09:11 by hakim             #+#    #+#             */
/*   Updated: 2022/05/30 01:09:12 by hakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base * generate(void) {
	Base *ret;
	int rand = std::rand() % 3;

	switch(rand) {
		case 0:
			std::cout << "generating A" << std::endl;
			ret = new A();
			break ;
		case 1:
			std::cout << "generating B" << std::endl;
			ret = new B();
			break ;
		case 2:
			std::cout << "generating C" << std::endl;
			ret = new C();
			break ;
		default:
			std::cout << "something impossible happened" << std::endl;
			ret = NULL;
	}
	return ret;
}

void identify(Base* p) {
	if (dynamic_cast<A*>(p) != NULL)
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p) != NULL)
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p) != NULL)
		std::cout << "C" << std::endl;
	else
		std::cout << "something impossible happened" << std::endl;
}

void identify(Base& p) {
	try {
		static_cast<void>(dynamic_cast<A&>(p));
		std::cout<< "A" << std::endl;
	} catch (std::exception & e) {
		static_cast<void>(e);
	}
	try {
		static_cast<void>(dynamic_cast<B&>(p));
		std::cout<< "B" << std::endl;
	} catch (std::exception & e) {
		static_cast<void>(e);
	}
	try {
		static_cast<void>(dynamic_cast<C&>(p));
		std::cout<< "C" << std::endl;
	} catch (std::exception & e) {
		static_cast<void>(e);
	}
}

int main(void)
{
	std::srand(static_cast<unsigned int>(std::time(NULL)));
	Base* random_ptr;

	random_ptr = generate();
	identify(random_ptr);
	identify(*random_ptr);
	delete random_ptr;

	random_ptr = generate();
	identify(random_ptr);
	identify(*random_ptr);
	delete random_ptr;

	random_ptr = generate();
	identify(random_ptr);
	identify(*random_ptr);
	delete random_ptr;

	random_ptr = generate();
	identify(random_ptr);
	identify(*random_ptr);
	delete random_ptr;

	random_ptr = generate();
	identify(random_ptr);
	identify(*random_ptr);
	delete random_ptr;

	random_ptr = generate();
	identify(random_ptr);
	identify(*random_ptr);
	delete random_ptr;

}
