/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakim <hakim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 10:31:33 by hakim             #+#    #+#             */
/*   Updated: 2022/04/28 10:31:34 by hakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_
# define WEAPON_

# include <iostream>

class	Weapon {
	private:
		std::string			type;
	public:
		void				setType(std::string weapon_type);
		const std::string&	getType() const;
		Weapon();
		explicit Weapon(std::string weapon_type);
		~Weapon();
};

#endif