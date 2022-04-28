/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakim <hakim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 22:13:00 by hakim             #+#    #+#             */
/*   Updated: 2022/04/26 22:13:01 by hakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H_
# define ZOMBIE_H_

# include <iostream>

class Zombie {
	private:
		std::string		name;
		Zombie();

	public:
		void			announce();
		static Zombie*	newZombie(std::string name);
		static void 	randomChump(std::string name);
		explicit Zombie(std::string name);
		~Zombie();
};

#endif