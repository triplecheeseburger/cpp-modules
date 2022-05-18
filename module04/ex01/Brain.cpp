/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakim <hakim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 16:12:06 by hakim             #+#    #+#             */
/*   Updated: 2022/05/17 16:12:07 by hakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Brain.hpp"

std::string Brain::getIdea(const int &i) const
{
	return ideas[i];
}

void Brain::setIdea(const int &i, const std::string str)
{
	if (i < 0 || i > CAPACITY)
	{
		std::cout << "Wrong index. 0-99 is available." << std::endl;
		return ;
	}
	ideas[i] = str;
}

Brain::Brain()
{
	std::cout << "Brain Constructor has been called." << std::endl;
}

Brain::Brain(const Brain &origin)
{
	for (int i = 0; i < CAPACITY; i++)
		ideas[i] = origin.ideas[i];
	std::cout << "Brain Copy Constructor has been called." << std::endl;
}

Brain &Brain::operator=(const Brain &origin)
{
	for (int i = 0; i < CAPACITY; i++)
		ideas[i] = origin.ideas[i];
	std::cout << "Brain Copy Assignment Operator has been called." << std::endl;
	return (*this);
}

Brain::~Brain()
{
	std::cout << "Brain Destructor has been called." << std::endl;
}

