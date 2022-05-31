/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakim <hakim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 14:53:46 by hakim             #+#    #+#             */
/*   Updated: 2022/05/17 14:53:46 by hakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG
# define DOG

# include "Animal.hpp"
# include "Brain.hpp"

class Dog: public Animal {

private:
	Brain	*brain;
public:
	void		makeSound(void) const;
	void		changeThought(const int& i, std::string newThought);
	std::string	getThought(const int& i);

	Dog();
	Dog(const Dog& origin);
	Dog& operator=(const Dog& origin);
	virtual ~Dog();
};

#endif
