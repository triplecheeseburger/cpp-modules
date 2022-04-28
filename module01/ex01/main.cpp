/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakim <hakim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 22:12:57 by hakim             #+#    #+#             */
/*   Updated: 2022/04/26 22:12:58 by hakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#define NUMBER 42

int	main()
{
	Zombie*	zombie_horde;

	zombie_horde = Zombie::zombieHorde(NUMBER, "cadet");
	for (int i = 0; i < NUMBER; i++)
		zombie_horde[i].announce();
	delete[] zombie_horde;
	return (0);
}