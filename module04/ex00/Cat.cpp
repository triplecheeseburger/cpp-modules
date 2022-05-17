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

Cat::Cat():
	Animal()
{
	type = "Cat";
	std::cout << "Constructor has been called for Cat Class Instance: type " << type << "." << std::endl;
}

Cat::Cat(const Cat &origin):
	Animal(origin)
{
	std::cout << "Copy Constructor has been called for Cat Class Instance: type " << type << "." << std::endl;
}

Cat &Cat::operator=(const Cat &origin)
{
	type = origin.type;
	std::cout << "Copy Constructor has been called for Cat Class Instance: type " << type << "." << std::endl;
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Destructor has been called for Cat Class Instance: type " << type << "." << std::endl;
}

