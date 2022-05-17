/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakim <hakim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 16:12:12 by hakim             #+#    #+#             */
/*   Updated: 2022/05/17 16:12:13 by hakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN
# define BRAIN

# include <iostream>

# define CAPACITY 100

class Brain {

private:
	std::string ideas[CAPACITY];

public:
	std::string	getIdea(const int& i) const;
	void 		setIdea(const int& i, const std::string str);

	Brain();
	Brain(const Brain& origin);
	Brain& operator=(const Brain& origin);
	virtual ~Brain();
};

#endif
