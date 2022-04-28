/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakim <hakim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 22:13:14 by hakim             #+#    #+#             */
/*   Updated: 2022/04/26 22:13:15 by hakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	Zombie::announce()
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie() : name("waiting to be one of horde") {}

Zombie::Zombie(std::string name) : name(name) {}

Zombie::~Zombie()
{
	std::cout << name << " is gone for good." << std::endl;
}