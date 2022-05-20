/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakim <hakim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 01:06:18 by hakim             #+#    #+#             */
/*   Updated: 2022/05/19 01:06:20 by hakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "AMateria.hpp"

std::string const &AMateria::getType() const
{
	return type;
}

void AMateria::use(ICharacter &target)
{
	std::cout << "* Concept of Materia is so abstract for " << target.getName() << "... *" << std::endl;
}

AMateria::AMateria(): type("")
{ std::cout << "AMateria Constructor has been called." << std::endl; }

AMateria::AMateria(const std::string &type): type(type)
{ std::cout << "AMateria Constructor with type: " << type << " has been called." << std::endl; }

AMateria::AMateria(const AMateria &origin): type(origin.type)
{ std::cout << "AMateria Copy Constructor has been called." << std::endl; }

AMateria &AMateria::operator=(const AMateria &origin)
{
	type = origin.type;
	std::cout << "This doesn't make any sense, but AMateria Assignation operator has been called." << std::cout;
	return (*this);
}

AMateria::~AMateria()
{
	std::cout << "AMateria Destructor has been called." << std::endl;
}
