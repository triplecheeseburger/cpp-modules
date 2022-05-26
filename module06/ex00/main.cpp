/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakim <hakim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 11:08:26 by hakim             #+#    #+#             */
/*   Updated: 2022/05/25 11:08:28 by hakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.hpp"

int main(int ac, char **av) {
	if (ac != 2) {
		std::cout << "Only One Argument Please!" << std::endl;
		return 1;
	}
	Conversion conv(av[1]);
	conv.print();
	return 0;
}
