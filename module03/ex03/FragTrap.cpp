/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakim <hakim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 23:43:45 by hakim             #+#    #+#             */
/*   Updated: 2022/05/16 23:43:56 by hakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

void FragTrap::highFiveGuys(void) const
{
	std::cout << "FragTrap " << name << ": HIGH FIVE GUYS!!! [RAISING HAND]" << std::endl;
}

FragTrap::FragTrap(): ClapTrap("FR4G-TP")
{
	hit_points = default_hp;
	energy_points = default_ep;
	attack_damage = default_ad;
	std::cout << "FragTrap " << name << " Constructor has been called." << std::endl;
}

FragTrap::FragTrap(const std::string &name) : ClapTrap(name)
{
	hit_points = default_hp;
	energy_points = default_ep;
	attack_damage = default_ad;
	std::cout << "FragTrap " << name << " Constructor has been called." << std::endl;
}

FragTrap::FragTrap(const FragTrap &origin): ClapTrap(origin)
{
	std::cout << "FragTrap " << name << " Copy Constructor has been called." << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &fragtrap)
{
	name = fragtrap.name;
	hit_points = fragtrap.hit_points;
	energy_points = fragtrap.energy_points;
	attack_damage = fragtrap.attack_damage;
	std::cout << "FragTrap " << name << " Copy assignment operator has been called." << std::endl;
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << name << " Destructor has been called." << std::endl;
}
