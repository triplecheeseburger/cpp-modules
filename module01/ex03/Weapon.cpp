/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakim <hakim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 10:31:39 by hakim             #+#    #+#             */
/*   Updated: 2022/04/28 10:31:40 by hakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

void	Weapon::setType(std::string weapon_type)
{
	type = weapon_type;
}

const std::string&	Weapon::getType() const
{
	const std::string&	type_ref = type;

	return type_ref;
}

Weapon::Weapon() : type("bare knuckle") {}

Weapon::Weapon(std::string weapon_type) : type(weapon_type) {}

Weapon::~Weapon() {}
