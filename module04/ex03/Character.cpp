/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakim <hakim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 01:06:22 by hakim             #+#    #+#             */
/*   Updated: 2022/05/19 01:06:24 by hakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"


std::string const &Character::getName() const
{
	return name;
}

void Character::equip(AMateria *m)
{
	if (m == NULL)
	{
		std::cout << name << " tried to equip Materia, but it was only an illusion." << std::endl;
		return ;
	}
	int i = 0;
	while (inventory[i] != NULL && i < 4)
		++i;
	if (i >= 4)
	{
		std::cout << name << "'s inventory is already full!" << std::endl;
		return ;
	}
	inventory[i] = m;
	std::cout << name << " equipped " << m->getType() << " in slot number " << i << "." << std::endl;

}

void Character::unequip(int idx)
{
	if (idx < 0 || idx >= 4)
	{
		std::cout << "There is no slot number " << idx << " for " << name << "'s inventory."<< std::endl;
		return ;
	}
	if (inventory[idx] == NULL)
	{
		std::cout << "There is nothing to unequip in inventory slot number" << idx << "." << std::endl;
		return ;
	}
	std::cout << name << "unequipped " << inventory[idx]->getType() << " in slot number " << idx << "." << std::endl;
	inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter &target)
{
	if (0 <= idx && idx < 4)
	{
		if (inventory[idx] != NULL)
			inventory[idx]->use(target);
		else
			std::cout << name << " tried to use Materia but found nothing in slot number " << idx << "." << std::endl;
	}
	else
		std::cout << "There is no slot number " << idx << " for " << name << "'s inventory."<< std::endl;
}

Character::Character(): name("")
{
	for (int i = 0 ; i < 4; i++)
		inventory[i] = NULL;
	std::cout << "Character Constructor has been called." << std::endl;
}

Character::Character(const std::string &name): name(name)
{
	for (int i = 0 ; i < 4; i++)
		inventory[i] = NULL;
	std::cout << "Character named " << name << " Constructor has been called." << std::endl;
}

Character::Character(const Character &origin): name(origin.name)
{
	for (int i = 0; i < 4; i++)
	{
		if (inventory[i] != NULL)
		{
			delete inventory[i];
			inventory[i] = NULL;
		}
		if (origin.inventory[i] != NULL)
			inventory[i] = (origin.inventory[i])->clone();
	}
	std::cout << "Character Copy Constructor has been called." << std::endl;
}

Character &Character::operator=(const Character &origin)
{
	name = origin.name;
	for (int i = 0; i < 4; i++)
	{
		if (inventory[i] != NULL)
		{
			delete inventory[i];
			inventory[i] = NULL;
		}
		if (origin.inventory[i] != NULL)
			inventory[i] = (origin.inventory[i])->clone();
	}
	std::cout << "Character Copy Assignation Operator has been called." << std::endl;
	return (*this);
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{
		if (inventory[i] != NULL)
		{
			delete inventory[i];
			inventory[i] = NULL;
		}
	}
	std::cout << "Character named " << name << " Destructor has been called." << std::endl;
}
