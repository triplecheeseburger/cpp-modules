/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakim <hakim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 00:27:06 by hakim             #+#    #+#             */
/*   Updated: 2022/05/17 00:27:10 by hakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP
# define DIAMONDTRAP

# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap {

private:
	std::string	name;

public:
	void	attack(const std::string& target) const;
	void	whoAmI();

	DiamondTrap();
	explicit DiamondTrap(const std::string& name);
	DiamondTrap(const DiamondTrap& origin);
	DiamondTrap& operator=(const DiamondTrap& diamondtrap);
	~DiamondTrap();
};

#endif
