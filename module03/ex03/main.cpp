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

#include "DiamondTrap.hpp"

int main(void) {
	DiamondTrap a;
	DiamondTrap b;
	DiamondTrap c(a);

	b = c;

	DiamondTrap d("hakim");
	d.attack("jujeon");
	d.printStatus();
	d.whoAmI();
}
