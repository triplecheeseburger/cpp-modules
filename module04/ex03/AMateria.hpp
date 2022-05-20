/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakim <hakim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 01:06:20 by hakim             #+#    #+#             */
/*   Updated: 2022/05/19 01:06:22 by hakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA
# define AMATERIA

# include <iostream>
# include "ICharacter.hpp"

class ICharacter;

class AMateria {

protected:
	std::string	type;

public:
	std::string const & getType() const;
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);

	AMateria();
	explicit AMateria(std::string const & type);
	AMateria(const AMateria& origin);
	AMateria& operator=(const AMateria& origin);
	virtual ~AMateria();
};

#endif
