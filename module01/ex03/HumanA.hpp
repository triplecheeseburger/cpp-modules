/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakim <hakim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 10:31:45 by hakim             #+#    #+#             */
/*   Updated: 2022/04/28 10:31:47 by hakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A_
# define HUMAN_A_

# include <iostream>
# include "Weapon.hpp"

class HumanA {
	private:
		std::string name;
		Weapon&		weapon;
		HumanA();
	public:
		void	attack();
		HumanA(std::string name, Weapon& weapon);
		~HumanA();
};

#endif