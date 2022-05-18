/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakim <hakim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 14:53:16 by hakim             #+#    #+#             */
/*   Updated: 2022/05/17 14:53:17 by hakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

void WrongAnimal::makeSound() const
{
	std::cout << "[INCOMPREHENSIBLE NOIZE]" << std::endl;
}

std::string WrongAnimal::getType(void) const
{
	return type;
}


WrongAnimal::WrongAnimal(): type("WrongAnimal")
{
	std::cout << "Constructor has been called for WrongAnimal Class Instance: type " << type << "." << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &origin): type(origin.type)
{
	std::cout << "Copy Constructor has been called for WrongAnimal Class Instance: type " << type << "." << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &origin)
{
	type = origin.type;
	std::cout << "Copy Assignment Operator has been called for WrongAnimal Class Instance: type " << type << "." << std::endl;
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "Destructor has been called for WrongAnimal Class Instance: type " << type << "." << std::endl;
}
