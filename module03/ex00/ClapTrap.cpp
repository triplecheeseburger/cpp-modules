/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakim <hakim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 13:24:55 by hakim             #+#    #+#             */
/*   Updated: 2022/05/16 13:24:56 by hakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

void ClapTrap::setName(std::string newName)
{
	name = newName;
}

void ClapTrap::setHP(unsigned int newHP)
{
	hit_points = newHP;
	if (newHP > default_hp)
	{
		std::cout << "Max value for hit point is 10!" << std::endl;
		hit_points = default_hp;
	}
}

void ClapTrap::setEP(unsigned int newEP)
{
	energy_points = newEP;
	if (newEP > default_ep)
	{
		std::cout << "Max value for energy point is 10! It will be set to 10." << std::endl;
		hit_points = default_ep;
	}
}

void ClapTrap::setAD(unsigned int newAD)
{
	attack_damage = newAD;
	if (newAD < default_ad)
	{
		std::cout << "Attack damage can't be negative! It will be set to 0." << std::endl;
		hit_points = default_ad;
	}
}

std::string ClapTrap::getName(void) const
{
	return name;
}

unsigned int ClapTrap::getHP(void) const
{
	return hit_points;
}

unsigned int ClapTrap::getEP(void) const
{
	return energy_points;
}

unsigned int ClapTrap::getAD(void) const
{
	return attack_damage;
}

void ClapTrap::attack(const std::string& target) const
{
	std::cout << "ClapTrap " << name << " attacks " << target
			  << ", causing " << attack_damage << " points of damage!"
			  << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (amount == 0)
		std::cout << "Is that all you've got?? ";
	else
		std::cout << "\"Oouch, It hurts!\" ";
	std::cout << name << " has lost " << amount << " hit points." << std::endl;
	if (amount > hit_points)
		this->setHP(0);
	this->setHP(hit_points - amount);
}

void ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << name << " has gained " << amount << " hit points." << std::endl;
	this->setHP(hit_points + amount);
}

void ClapTrap::printStatus() const
{
	std::cout << std::endl;
	std::cout << "===Status===" << std::endl;
	std::cout << "name: " << name << std::endl;
	std::cout << "hit points: " << hit_points << std::endl;
	std::cout << "energy points: " << energy_points << std::endl;
	std::cout << "attack damage: " << attack_damage << std::endl;
	std::cout << "====DONE====" << std::endl;
	std::cout << std::endl;
}

ClapTrap::ClapTrap():
	name("CL4P-TP"), hit_points(default_hp), energy_points(default_ep), attack_damage(default_ad)
{
	std::cout << "ClapTrap " << name << " Constructor has been called." << std::endl;
}

ClapTrap::ClapTrap(const std::string &name):
	name(name), hit_points(default_hp), energy_points(default_ep), attack_damage(default_ad)
{
	std::cout << "ClapTrap " << name << " Constructor with custom name has been called." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &origin):
	name(origin.name), hit_points(origin.hit_points), energy_points(origin.energy_points), attack_damage(origin.attack_damage)
{
	std::cout << "ClapTrap " << name << " Copy Constructor has been called." << std::endl;

}

ClapTrap& ClapTrap::operator=(const ClapTrap &claptrap)
{
	name = claptrap.name;
	hit_points = claptrap.hit_points;
	energy_points = claptrap.energy_points;
	attack_damage = claptrap.attack_damage;
	std::cout << "ClapTrap " << name << " Copy assignment operator has been called." << std::endl;
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << name << " Destructor has been called." << std::endl;
}