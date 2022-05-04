/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakim <hakim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 10:32:02 by hakim             #+#    #+#             */
/*   Updated: 2022/04/28 10:32:03 by hakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void	HumanB::attack()
{
	std::cout << name << " attacks with their " << weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon& weapon)
{
	this->weapon = &weapon;
}

HumanB::HumanB() : name("secret"), weapon(0) {}

HumanB::HumanB(std::string name) : name(name), weapon(0) {}

HumanB::HumanB(std::string name, Weapon weapon) : name(name)
{
	this->weapon = &weapon;
}

HumanB::~HumanB() {}
