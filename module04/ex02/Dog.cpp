/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakim <hakim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 14:53:41 by hakim             #+#    #+#             */
/*   Updated: 2022/05/17 14:53:42 by hakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

void Dog::makeSound() const
{
	std::cout << "Wall Wall!" << std::endl;
}

void Dog::changeThought(const int &i, std::string newThought)
{
	brain->setIdea(i, newThought);
}

std::string Dog::getThought(const int &i)
{
	return brain->getIdea(i);
}

Dog::Dog():
		Animal(), brain(new Brain())
{
	type = "Dog";
	for (int i = 0; i < 100; i++) {
		if (i % 3 == 0)
			brain->setIdea(i, "EAT");
		else if (i % 3 == 1)
			brain->setIdea(i, "SLEEP");
		else
			brain->setIdea(i, "PLAY");
	}
	std::cout << "Constructor has been called for Dog Class Instance: type " << type << "." << std::endl;
}

Dog::Dog(const Dog &origin):
		Animal(origin), brain(new Brain(*origin.brain))
{
	std::cout << "Copy Constructor has been called for Dog Class Instance: type " << type << "." << std::endl;
}

Dog &Dog::operator=(const Dog &origin)
{
	if (this != &origin) {
		type = origin.type;
		*brain = *origin.brain;
	}
	std::cout << "Copy Constructor has been called for Dog Class Instance: type " << type << "." << std::endl;
	return (*this);
}

Dog::~Dog()
{
	delete brain;
	std::cout << "Destructor has been called for Dog Class Instance: type " << type << "." << std::endl;
}
