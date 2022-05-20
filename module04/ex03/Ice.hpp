/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakim <hakim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 01:06:13 by hakim             #+#    #+#             */
/*   Updated: 2022/05/19 01:06:15 by hakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE
# define ICE

# include "AMateria.hpp"

# define TYPE_ICE "ice"

class Ice: public AMateria {

private:
	std::string	type;
public:
	AMateria*	clone(void) const;
	void		use(ICharacter& target);

	Ice();
	Ice(const Ice& origin);
	Ice& operator=(const Ice& origin);
	~Ice();
};

#endif
