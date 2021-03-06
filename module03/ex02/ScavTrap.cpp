/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakim <hakim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 22:00:36 by hakim             #+#    #+#             */
/*   Updated: 2022/05/16 22:00:54 by hakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

void ScavTrap::guardGate(void) const
{
	std::cout << "ScavTrap " << name << "'s guard mode is currently " << (on_guard ? "on." : "off.") << std::endl;
}

void ScavTrap::attack(const std::string& target) const
{
	std::cout << "ScavTrap " << name << " attacks " << target
			  << ", causing " << attack_damage << " points of damage!"
			  << std::endl;
}

ScavTrap::ScavTrap(): ClapTrap("SC4V-TP"), on_guard(false)
{

	hit_points = default_hp;
	energy_points = default_ep;
	attack_damage = default_ad;
	std::cout << "ScavTrap " << name << " Constructor has been called." << std::endl;
}

ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name), on_guard(false)
{
	hit_points = default_hp;
	energy_points = default_ep;
	attack_damage = default_ad;
	std::cout << "ScavTrap " << name << " Constructor has been called." << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &origin): ClapTrap(origin), on_guard(false)
{
	std::cout << "ScavTrap " << name << " Copy Constructor has been called." << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &scavtrap)
{
	name = scavtrap.name;
	hit_points = scavtrap.hit_points;
	energy_points = scavtrap.energy_points;
	attack_damage = scavtrap.attack_damage;
	std::cout << "ScavTrap " << name << " Copy assignment operator has been called." << std::endl;
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << name << " Destructor has been called." << std::endl;
}

void ScavTrap::toggleGuardmode(void)
{
	on_guard = !on_guard;
}
