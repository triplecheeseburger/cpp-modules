/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakim <hakim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 23:43:51 by hakim             #+#    #+#             */
/*   Updated: 2022/05/16 23:43:53 by hakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP
# define FRAGTRAP

# include "ClapTrap.hpp"

class FragTrap: public ClapTrap {

private:
	static const unsigned int	default_hp = 100;
	static const unsigned int	default_ep = 100;
	static const unsigned int	default_ad = 30;

public:
	void	highFiveGuys(void) const;

	FragTrap();
	explicit FragTrap(const std::string& name);
	FragTrap(const FragTrap& origin);
	FragTrap& operator=(const FragTrap& fragtrap);
	virtual ~FragTrap();
};

#endif
