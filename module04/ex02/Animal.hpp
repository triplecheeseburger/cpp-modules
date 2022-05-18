/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakim <hakim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 14:53:23 by hakim             #+#    #+#             */
/*   Updated: 2022/05/17 14:53:23 by hakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	ANIMAL
# define ANIMAL

# include <iostream>

class Animal {

protected:
	std::string	type;

public:
	virtual void	makeSound(void) const = 0;
	std::string		getType(void) const;

	Animal();
	Animal(const Animal& origin);
	Animal& operator=(const Animal& origin);
	virtual ~Animal();
};

#endif
