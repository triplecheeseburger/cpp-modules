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

#define NUM_OF_ANIMALS 10

void	test_dynamic(void)
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete j;
	delete i;
}

void	test_brain(void)
{
	Dog dog;
	Cat cat;

	dog.changeThought(0, "KILL");
	std::cout << dog.getThought(0) << std::endl;
	Dog copyConstDog(dog);
	dog.changeThought(0, "EAT");
	std::cout << copyConstDog.getThought(0) << std::endl;
	Dog copyAssignOperDog;
	copyAssignOperDog = copyConstDog;
	copyConstDog.changeThought(0, "EAT");
	std::cout << copyAssignOperDog.getThought(0) << std::endl;

	cat.changeThought(0, "SAVE");
	std::cout << cat.getThought(0) << std::endl;
	Cat copyConstCat(cat);
	cat.changeThought(0, "EAT");
	std::cout << copyConstCat.getThought(0) << std::endl;
	Cat copyAssignOperCat;
	copyAssignOperCat = copyConstCat;
	copyConstCat.changeThought(0, "EAT");
	std::cout << copyAssignOperCat.getThought(0) << std::endl;
}

void	test_array(void)
{
	Animal*	animals[NUM_OF_ANIMALS];
	Cat* some_cat;
	Dog* some_dog;

	for (int i = 0; i < NUM_OF_ANIMALS; i++)
	{
		if (i % 2 == 0)
			animals[i] = new Cat();
		else
			animals[i] = new Dog();
		animals[i]->makeSound();
	}
	some_cat = dynamic_cast<Cat *>(animals[6]);
	std::cout << some_cat->getThought(2) << std::endl;
	some_dog = dynamic_cast<Dog *>(animals[5]);
	std::cout << some_dog->getThought(2) << std::endl;
	for (int i = 0; i < NUM_OF_ANIMALS; i++)
		delete animals[i];
}

int main()
{
	test_dynamic();
	test_brain();
	test_array();
	system("leaks ex01");
	return 0;
}
