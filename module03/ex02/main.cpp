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

#include "FragTrap.hpp"

int main(void) {
	FragTrap a;
	FragTrap b;
	FragTrap c(a);

	b = a;

	FragTrap d("hakim");

	b.setName("TrapFrag");
	c.setName("hakim's servant");

	a.printStatus();
	b.printStatus();
	c.printStatus();
	d.printStatus();

	a.highFiveGuys();
	b.highFiveGuys();
	c.highFiveGuys();
	d.highFiveGuys();
}
