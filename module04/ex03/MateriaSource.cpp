/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakim <hakim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 01:06:31 by hakim             #+#    #+#             */
/*   Updated: 2022/05/19 01:06:32 by hakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "MateriaSource.hpp"
#include "AMateria.hpp"

void MateriaSource::learnMateria(AMateria* materia)
{
	if (materia == NULL)
	{
		std::cout << "Unknown Materia" << std::endl;
		return ;
	}
	int i = 0;
	while (inventory[i] != NULL && i < 4)
		++i;
	if (i >= 4)
	{
		std::cout << "MateriaSource is Full." << std::endl;
		return ;
	}
	inventory[i] = materia;
	std::cout << "MateriaSource learned new Materia type: " << materia->getType() << "." << std::endl;
}

AMateria *MateriaSource::createMateria(const std::string &type)
{
	int i = 0;

	while (inventory[i] != NULL && i < 4)
	{
		if (inventory[i]->getType() == type)
		{
			std::cout << inventory[i]->getType() << "type Materia has been created." << std::endl;
			return inventory[i]->clone();
		}
		++i;
	}
	std::cout << "Failed to find matching type Materia." << std::endl;
	return NULL;
}

MateriaSource::MateriaSource()
{
	for (int i = 0 ; i < 4; i++)
		inventory[i] = NULL;
	std::cout << "MateriaSource Constructor has been called." << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource &origin)
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
	std::cout << "MateriaSource Copy Constructor has been called." << std::endl;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &origin)
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
	std::cout << "MateriaSource Copy Assignation Operator has been called." << std::endl;
	return (*this);
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		if (inventory[i] != NULL)
		{
			delete inventory[i];
			inventory[i] = NULL;
		}
	}
	std::cout << "MateriaSource Destructor has been called." << std::endl;
}
