/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakim <hakim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 22:00:51 by hakim             #+#    #+#             */
/*   Updated: 2022/05/16 22:00:52 by hakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP
# define SCAVTRAP

# include "ClapTrap.hpp"

class ScavTrap: virtual public ClapTrap {

private:
	bool	on_guard;

	static const unsigned int	default_hp = 100;
	static const unsigned int	default_ep = 50;
	static const unsigned int	default_ad = 20;

public:
	void	guardGate(void) const;
	void	toggleGuardmode(void);
	void	attack(const std::string& target) const;
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	void	printStatus() const;

	ScavTrap();
	explicit ScavTrap(const std::string& name);
	ScavTrap(const ScavTrap& origin);
	ScavTrap& operator=(const ScavTrap& scavtrap);
	virtual ~ScavTrap();
};

#endif
