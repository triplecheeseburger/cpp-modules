/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakim <hakim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 22:42:14 by hakim             #+#    #+#             */
/*   Updated: 2022/04/27 22:42:24 by hakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	Zombie::zombieHorde(int N, std::string name)
{
	Zombie*	zombie_horde = new Zombie[N];

	for (int i = 0; i < N; i++)
		zombie_horde[i].setName(name + std::to_string(i + 1));
	return zombie_horde;
}
