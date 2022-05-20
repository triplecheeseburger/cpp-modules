/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakim <hakim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 01:06:28 by hakim             #+#    #+#             */
/*   Updated: 2022/05/19 01:06:29 by hakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE
# define CURE

# include "AMateria.hpp"

# define TYPE_CURE "cure"

class Cure: public AMateria {

private:
	std::string	type;
public:
	AMateria*	clone(void) const;
	void		use(ICharacter& target);

	Cure();
	Cure(const Cure& origin);
	Cure& operator=(const Cure& origin);
	~Cure();
};

#endif
