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

Dog::Dog():
		Animal()
{
	type = "Dog";
	std::cout << "Constructor has been called for Dog Class Instance: type " << type << "." << std::endl;
}

Dog::Dog(const Dog &origin):
	Animal(origin)
{
	std::cout << "Copy Constructor has been called for Dog Class Instance: type " << type << "." << std::endl;
}

Dog &Dog::operator=(const Dog &origin)
{
	type = origin.type;
	std::cout << "Copy Constructor has been called for Dog Class Instance: type " << type << "." << std::endl;
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Destructor has been called for Dog Class Instance: type " << type << "." << std::endl;
}
