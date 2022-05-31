/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakim <hakim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 14:53:27 by hakim             #+#    #+#             */
/*   Updated: 2022/05/17 14:53:27 by hakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

void Cat::makeSound() const
{
	std::cout << "Meow Meow.." << std::endl;
}

void Cat::changeThought(const int &i, std::string newThought)
{
	brain->setIdea(i, newThought);
}

std::string Cat::getThought(const int &i)
{
	return brain->getIdea(i);
}

Cat::Cat():
	Animal(), brain(new Brain())
{
	type = "Cat";
	for (int i = 0; i < 100; i++) {
		if (i % 3 == 0)
			brain->setIdea(i, "EAT");
		else if (i % 3 == 1)
			brain->setIdea(i, "PRAY");
		else
			brain->setIdea(i, "LOVE");
	}
	std::cout << "Constructor has been called for Cat Class Instance: type " << type << "." << std::endl;
}

Cat::Cat(const Cat &origin):
	Animal(origin), brain(new Brain(*origin.brain))
{
	std::cout << "Copy Constructor has been called for Cat Class Instance: type " << type << "." << std::endl;
}

Cat &Cat::operator=(const Cat &origin)
{
	if (this != &origin) {
		type = origin.type;
		*brain = *origin.brain;
	}
	std::cout << "Copy Constructor has been called for Cat Class Instance: type " << type << "." << std::endl;
	return (*this);
}

Cat::~Cat()
{
	delete brain;
	std::cout << "Destructor has been called for Cat Class Instance: type " << type << "." << std::endl;
}
