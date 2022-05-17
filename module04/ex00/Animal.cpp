/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakim <hakim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 14:53:16 by hakim             #+#    #+#             */
/*   Updated: 2022/05/17 14:53:17 by hakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

void Animal::makeSound() const
{
	std::cout << "[INCOMPREHENSIBLE NOIZE]" << std::endl;
}

std::string Animal::getType(void) const
{
	return type;
}


Animal::Animal(): type("Animal")
{
	std::cout << "Constructor has been called for Animal Class Instance: type " << type << "." << std::endl;
}

Animal::Animal(const Animal &origin): type(origin.type)
{
	std::cout << "Copy Constructor has been called for Animal Class Instance: type " << type << "." << std::endl;
}

Animal &Animal::operator=(const Animal &origin)
{
	type = origin.type;
	std::cout << "Copy Assignment Operator has been called for Animal Class Instance: type " << type << "." << std::endl;
	return (*this);
}

Animal::~Animal()
{
	std::cout << "Destructor has been called for Animal Class Instance: type " << type << "." << std::endl;
}
