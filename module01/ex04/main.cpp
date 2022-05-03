/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakim <hakim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 20:39:29 by hakim             #+#    #+#             */
/*   Updated: 2022/05/03 20:39:31 by hakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ReplaceForWinner.hpp"

int main(int ac, char **av)
{
	ReplaceForWinner not_sed;

	if (ac != 4)
	{
		std::cerr << "Error: Wrong number of arguments" << std::endl;
		std::cerr << "./ReplaceForWinner <file> <string to replace> <replacement>" << std::endl;
		return (1);
	}
	if (not_sed.setFile(av[1]) != true)
	{
		std::cerr << "Error occurred" << std::endl;
		return (1);
	}
	not_sed.replace(av[2], av[3]);
	return (0);
}