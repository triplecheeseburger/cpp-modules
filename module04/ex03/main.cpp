/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakim <hakim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 01:06:35 by hakim             #+#    #+#             */
/*   Updated: 2022/05/19 01:06:36 by hakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");

	AMateria* ice = src->createMateria("ice");
	me->equip(ice);
	AMateria* cure = src->createMateria("cure");
	me->equip(cure);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	me->use(2, *bob);
	me->unequip(0);
	me->unequip(1);
	me->unequip(2);
	delete ice;
	delete cure;
	delete bob;
	delete me;
	delete src;
	system("leaks ex03");
	return 0;
}
