/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakim <hakim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 01:06:16 by hakim             #+#    #+#             */
/*   Updated: 2022/05/19 01:06:18 by hakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

void Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

AMateria *Ice::clone(void) const
{
	return new Ice();
}

Ice::Ice(): AMateria(TYPE_ICE)
{ std::cout << "Ice Constructor has been called." << std::endl; }

Ice::Ice(const Ice &origin): AMateria(origin.type)
{ std::cout << "Ice Copy Constructor has been called." << std::endl; }

Ice &Ice::operator=(const Ice &origin)
{
	type = origin.type;
	std::cout << "This doesn't make any sense, but Ice Assignation operator has been called." << std::cout;
	return (*this);
}

Ice::~Ice()
{
	std::cout << "Ice Destructor has been called." << std::endl;
}
