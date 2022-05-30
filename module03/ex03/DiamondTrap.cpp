/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakim <hakim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 00:27:03 by hakim             #+#    #+#             */
/*   Updated: 2022/05/17 00:27:04 by hakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "DiamondTrap.hpp"

void DiamondTrap::attack(const std::string &target) const
{
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
	std::cout << "Hi my DiamondTrap name is " << name << ", and my ClapTrap name is " << ClapTrap::name << "." << std::endl;
}

DiamondTrap::DiamondTrap()
{
	name = "D14M0ND-TP";
	ClapTrap::name = name + "_clap_name";
	hit_points = FragTrap::hit_points;
	energy_points = ScavTrap::energy_points;
	attack_damage = FragTrap::attack_damage;
	std::cout << "DiamondTrap " << name << " Constructor has been called." << std::endl;
}

DiamondTrap::DiamondTrap(const std::string &name):
	ClapTrap(name + "_clap_name")
{
	this->name = name;
	hit_points = FragTrap::hit_points;
	energy_points = ScavTrap::energy_points;
	attack_damage = FragTrap::attack_damage;
	std::cout << "DiamondTrap " << name << " Constructor has been called." << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &origin)
{
	name = origin.name;
	hit_points = origin.hit_points;
	energy_points = origin.energy_points;
	attack_damage = origin.attack_damage;
	std::cout << "DiamondTrap " << name << " Copy Constructor has been called." << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &diamondtrap)
{
	name = diamondtrap.name;
	hit_points = diamondtrap.hit_points;
	energy_points = diamondtrap.energy_points;
	attack_damage = diamondtrap.attack_damage;
	std::cout << "DiamondTrap " << name << " Copy assignment operator has been called." << std::endl;
	return (*this);
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap " << name << " Destructor has been called." << std::endl;
}
