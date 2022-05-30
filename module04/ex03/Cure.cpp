/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakim <hakim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 01:06:26 by hakim             #+#    #+#             */
/*   Updated: 2022/05/19 01:06:28 by hakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

void Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}

AMateria *Cure::clone(void) const
{
	return new Cure();
}

Cure::Cure(): AMateria(TYPE_CURE)
{ std::cout << "Cure Constructor has been called." << std::endl; }

Cure::Cure(const Cure &origin): AMateria(origin.type)
{ std::cout << "Cure Copy Constructor has been called." << std::endl; }

Cure &Cure::operator=(const Cure &origin)
{
	type = origin.type;
	std::cout << "This doesn't make any sense, but Cure Assignation operator has been called." << std::cout;
	return (*this);
}

Cure::~Cure()
{
	std::cout << "Cure Destructor has been called." << std::endl;
}
