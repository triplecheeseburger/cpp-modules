/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakim <hakim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 20:09:07 by hakim             #+#    #+#             */
/*   Updated: 2022/05/04 20:09:09 by hakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug()
{
	std::cout << "I love having extra bacon for my "
			  << "7XL-double-cheese-triple-pickle-special-ketchup burger. "
			  << "I really do!" << std::endl;
}

void Harl::info()
{
	std::cout << "I cannot believe adding extra bacon costs more money. "
			  << "You didn’t put enough bacon in my burger! If you did, "
			  << "I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning()
{
	std::cout << "I think I deserve to have some extra bacon for free. "
			  << "I’ve been coming for years whereas you started working here since last month."
			  << std::endl;
}

void Harl::error()
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::filter()
{
	std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
}

void Harl::complain(std::string level)
{
	int	complain_level = -1;
	std::string waitlist[4] = {
			"DEBUG",
			"INFO",
			"WARNING",
			"ERROR"
	};

	for (int i = 0; i < 5; i++)
	{
		if (level == waitlist[i])
			complain_level = i;
	}
	switch (complain_level)
	{
		case 0:
			debug();
		case 1:
			info();
		case 2:
			warning();
		case 3:
			error();
			break;
		default:
			filter();
	}
}

Harl::Harl() {}

Harl::~Harl() {}
