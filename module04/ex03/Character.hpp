/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakim <hakim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 01:06:25 by hakim             #+#    #+#             */
/*   Updated: 2022/05/19 01:06:26 by hakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER
# define CHARACTER

# include "ICharacter.hpp"

class AMateria;

class Character: public ICharacter {

private:
	AMateria*	inventory[4];
	std::string name;

public:
	std::string const & getName() const;
	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);

	Character();
	explicit Character(const std::string& name);
	Character(const Character& origin);
	Character& operator=(const Character& origin);
	~Character();
};

#endif
