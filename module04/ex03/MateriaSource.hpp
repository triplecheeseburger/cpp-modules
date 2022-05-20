/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakim <hakim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 01:06:33 by hakim             #+#    #+#             */
/*   Updated: 2022/05/19 01:06:34 by hakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE
# define MATERIASOURCE

# include "IMateriaSource.hpp"

class AMateria;

class MateriaSource: public IMateriaSource {

private:
	AMateria*	inventory[4];

public:
	void learnMateria(AMateria* materia);
	AMateria* createMateria(std::string const & type);

	MateriaSource();
	MateriaSource(const MateriaSource& origin);
	MateriaSource& operator=(const MateriaSource& origin);
	~MateriaSource();
};

#endif
