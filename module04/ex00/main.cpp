/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakim <hakim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 14:52:54 by hakim             #+#    #+#             */
/*   Updated: 2022/05/17 14:52:55 by hakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

void	test_normal(void)
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();

	delete meta;
	delete j;
	delete i;
}

void	test_abnormal(void)
{
	const WrongAnimal* wrong_meta = new WrongAnimal();
	const WrongAnimal* wrong_j = new WrongCat();
	std::cout << wrong_j->getType() << " " << std::endl;
	wrong_j->makeSound();
	wrong_meta->makeSound();

	delete wrong_meta;
	delete wrong_j;
}

int main()
{
	test_normal();
	test_abnormal();
//	system("leaks ex00");
	return 0;
}
