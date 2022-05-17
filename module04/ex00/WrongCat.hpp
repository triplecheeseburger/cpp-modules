/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakim <hakim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 14:53:33 by hakim             #+#    #+#             */
/*   Updated: 2022/05/17 14:53:33 by hakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT
# define WRONGCAT

# include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal {

public:
	void	makeSound(void) const;

	WrongCat();
	WrongCat(const WrongCat& origin);
	WrongCat& operator=(const WrongCat& origin);
	virtual ~WrongCat();
};

#endif
