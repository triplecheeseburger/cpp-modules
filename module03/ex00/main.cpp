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

#include "ClapTrap.hpp"

int main(void) {
	ClapTrap a;
	ClapTrap b;
	ClapTrap c(a);

	b = a;

	ClapTrap d("hakim");
	d.printStatus();

	b.setName("TrapClap");
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
}
