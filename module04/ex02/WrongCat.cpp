/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakim <hakim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 14:53:27 by hakim             #+#    #+#             */
/*   Updated: 2022/05/17 14:53:27 by hakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

void WrongCat::makeSound() const
{
	std::cout << "Meow Meow.." << std::endl;
}

WrongCat::WrongCat():
	WrongAnimal()
{
	type = "WrongCat";
	std::cout << "Constructor has been called for WrongCat Class Instance: type " << type << "." << std::endl;
}

WrongCat::WrongCat(const WrongCat &origin)
{
	type = origin.type;
	std::cout << "Copy Constructor has been called for WrongCat Class Instance: type " << type << "." << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &origin)
{
	type = origin.type;
	std::cout << "Copy Constructor has been called for WrongCat Class Instance: type " << type << "." << std::endl;
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "Destructor has been called for WrongCat Class Instance: type " << type << "." << std::endl;
}
