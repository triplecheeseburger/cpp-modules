/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakim <hakim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 13:24:48 by hakim             #+#    #+#             */
/*   Updated: 2022/05/16 13:24:49 by hakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP
# define CLAPTRAP

#include <iostream>

class ClapTrap {

private:
	std::string		name;
	unsigned int	hit_points;
	unsigned int	energy_points;
	unsigned int	attack_damage;

	static const unsigned int	default_hp = 10;
	static const unsigned int	default_ep = 10;
	static const unsigned int	default_ad = 0;

public:
	void	setName(std::string newName);
	void	setHP(unsigned int newHP);
	void	setEP(unsigned int newEP);
	void	setAD(unsigned int newAD);
	std::string		getName(void) const;
	unsigned int	getHP(void) const;
	unsigned int	getEP(void) const;
	unsigned int	getAD(void) const;

	void	attack(const std::string& target) const;
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	void	printStatus() const;

	ClapTrap();
	explicit ClapTrap(const std::string& name);
	ClapTrap(const ClapTrap& origin);
	ClapTrap& operator=(const ClapTrap& claptrap);
	~ClapTrap();
};

#endif
