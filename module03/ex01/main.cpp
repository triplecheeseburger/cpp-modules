/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakim <hakim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 13:24:36 by hakim             #+#    #+#             */
/*   Updated: 2022/05/16 13:24:37 by hakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void) {
	ScavTrap a;
	ScavTrap b;
	ScavTrap c(a);

	b = a;

	ScavTrap d("hakim");
	d.printStatus();

	b.setName("TrapScav");
	c.setName("hakim's servant");

	a.attack(b.getName());
	b.takeDamage(a.getAD());
	b.printStatus();
	a.setAD(5);
	b.takeDamage(a.getAD());
	b.printStatus();
	a.printStatus();
	b.beRepaired(3);
	b.printStatus();
	b.beRepaired(3);
	b.printStatus();
	c.setAD(3000);
	c.attack("jujeon");

	a.toggleGuardmode();
	a.guardGate();
	a.toggleGuardmode();
	a.guardGate();
}
