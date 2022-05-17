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

#ifndef	WRONGANIMAL
# define WRONGANIMAL

# include <iostream>

class WrongAnimal {

protected:
	std::string	type;

public:
	 void			makeSound(void) const;
	std::string		getType(void) const;

	WrongAnimal();
	WrongAnimal(const WrongAnimal& origin);
	WrongAnimal& operator=(const WrongAnimal& origin);
	virtual ~WrongAnimal();
};

#endif
