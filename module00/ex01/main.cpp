/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakim <hakim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 14:59:15 by hakim             #+#    #+#             */
/*   Updated: 2022/04/25 14:59:16 by hakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main()
{
	std::string cmd;
	PhoneBook phone_book;

	phone_book.Greeting();
	while (!std::cin.eof())
	{
		std::cout << "Command List:   1. ADD   2. SEARCH   3. EXIT   ==>  ";
		std::getline(std::cin, cmd);
		if (cmd == "EXIT")
			break ;
		else if (cmd == "ADD")
			phone_book.AddContact();
		else if (cmd == "SEARCH")
			phone_book.Search();
	}
	phone_book.Farewell();
	return (0);
}
