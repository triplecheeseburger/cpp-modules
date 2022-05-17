/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakim <hakim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 14:53:33 by hakim             #+#    #+#             */
/*   Updated: 2022/05/17 14:53:33 by hakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT
# define CAT

# include "Animal.hpp"
# include "Brain.hpp"

class Cat: public Animal {

private:
	Brain	*brain;
public:
	void		makeSound(void) const;
	void		changeThought(const int& i, std::string newThought);
	std::string	getThought(const int& i);

	Cat();
	Cat(const Cat& origin);
	Cat& operator=(const Cat& origin);
	virtual ~Cat();
};

#endif
