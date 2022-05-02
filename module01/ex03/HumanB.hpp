/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakim <hakim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 10:31:55 by hakim             #+#    #+#             */
/*   Updated: 2022/04/28 10:31:56 by hakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B_
# define HUMAN_B_

# include <iostream>
# include "Weapon.hpp"

class HumanB {
	private:
		std::string name;
		Weapon*		weapon;
	public:
		void	attack();
		void	setWeapon(Weapon& weapon);
		explicit HumanB(std::string name);
		HumanB(std::string name, Weapon weapon);
		HumanB();
		~HumanB();
};

#endif