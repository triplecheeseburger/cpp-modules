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

int	main()
{
	Zombie	stack_zombie("static zombie");
	Zombie* heap_zombie;

	heap_zombie = Zombie::newZombie("dynamic zombie");
	heap_zombie->announce();
	Zombie::randomChump("auto zombie");
	delete heap_zombie;
	return (0);
}