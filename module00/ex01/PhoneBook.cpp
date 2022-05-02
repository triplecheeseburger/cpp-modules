/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakim <hakim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 14:57:59 by hakim             #+#    #+#             */
/*   Updated: 2022/04/25 14:58:02 by hakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void PhoneBook::Greeting()
{
	char phonebook[11][100] = {
			"============================================ hakim's =============================================\n",
			"   _ (`-.  ('-. .-.                  .-') _   ('-. .-. .-')                            .-. .-')   \n",
			"  ( (OO  )( OO )  /                 ( OO ) )_(  OO)\\  ( OO )                           \\  ( OO )  \n",
			" _.`     \\,--. ,--. .-'),-----. ,--./ ,--,'(,------.;-----.\\  .-'),-----.  .-'),-----. ,--. ,--.  \n",
			"(__...--''|  | |  |( OO'  .-.  '|   \\ |  |\\ |  .---'| .-.  | ( OO'  .-.  '( OO'  .-.  '|  .'   /  \n",
			" |  /  | ||   .|  |/   |  | |  ||    \\|  | )|  |    | '-' /_)/   |  | |  |/   |  | |  ||      /,  \n",
			" |  |_.' ||       |\\_) |  |\\|  ||  .     |/(|  '--. | .-. `. \\_) |  |\\|  |\\_) |  |\\|  ||     ' _) \n",
			" |  .___.'|  .-.  |  \\ |  | |  ||  |\\    |  |  .--' | |  \\  |  \\ |  | |  |  \\ |  | |  ||  .   \\   \n",
			" |  |     |  | |  |   `'  '-'  '|  | \\   |  |  `---.| '--'  /   `'  '-'  '   `'  '-'  '|  |\\   \\  \n",
			" `--'     `--' `--'     `-----' `--'  `--'  `------'`------'      `-----'      `-----' `--' '--'  \n",
			"==================================================================================================\n"
	};
	for (int i = 0; i < 11; i++)
		std::cout << phonebook[i];
}

void PhoneBook::Farewell()
{
	char phonebook[11][100] = {
			"===================================================================================\n",
			"            ('-.     _  .-')     ('-.    (`\\ .-') /`   ('-.                      \n",
			"           ( OO ).-.( \\( -O )  _(  OO)    `.( OO ),' _(  OO)                     \n",
			"   ,------./ . --. / ,------. (,------.,--./  .--.  (,------.,--.      ,--.      \n",
			"('-| _.---'| \\-.  \\  |   /`. ' |  .---'|      |  |   |  .---'|  |.-')  |  |.-')  \n",
			"(OO|(_\\  .-'-'  |  | |  /  | | |  |    |  |   |  |,  |  |    |  | OO ) |  | OO ) \n",
			"/  |  '--.\\| |_.'  | |  |_.' |(|  '--. |  |.'.|  |_)(|  '--. |  |`-' | |  |`-' | \n",
			"\\_)|  .--' |  .-.  | |  .  '.' |  .--' |         |   |  .--'(|  '---.'(|  '---.' \n",
			"  \\|  |_)  |  | |  | |  |\\  \\  |  `---.|   ,'.   |   |  `---.|      |  |      |  \n",
			"   `--'    `--' `--' `--' '--' `------''--'   '--'   `------'`------'  `------'  \n",
			"===================================================================================\n"
	};
	for (int i = 0; i < 11; i++)
		std::cout << phonebook[i];
}

void PhoneBook::AddContact()
{
	int idx;

	idx = index % 8;
	contacts[idx].set_first_name();
	contacts[idx].set_last_name();
	contacts[idx].set_nickname();
	contacts[idx].set_phone_number();
	contacts[idx].set_darkest_secret();
	std::cout << std::endl;
	++index;
}

void PhoneBook::ShowPhoneBook()
{
	std::cout << std::setw(43) << std::setfill('=') << "=" << std::endl;
	std::cout << std::setfill(' ');
	std::cout << std::setw(10) << "INDEX" << "|";
	std::cout << std::setw(10) << "FIRST NAME" << "|";
	std::cout << std::setw(10) << "LAST NAME" << "|";
	std::cout << std::setw(10) << "NICKNAME" << std::endl;
	std::cout << std::setw(43) << std::setfill('-') << "-" << std::endl;
	std::cout << std::setfill(' ');
	for (int i = 0; i < std::min(index, 8); i++)
	{
		std::cout << std::setw(10) << i + 1 << "|";
		std::cout << std::setw(10) << MakeTen(contacts[i].get_first_name()) << "|";
		std::cout << std::setw(10) << MakeTen(contacts[i].get_last_name()) << "|";
		std::cout << std::setw(10) << MakeTen(contacts[i].get_nickname()) << std::endl;
	}
	std::cout << std::setw(43) << std::setfill('=') << "=" << std::endl;
}

std::string PhoneBook::MakeTen(std::string str)
{
	if (str.length() > 10)
		return str.substr(0, 9) + '.';
	return str;
}

void PhoneBook::Search()
{
	int show_index;

	ShowPhoneBook();
	if (index == 0)
	{
		std::cout << "NO CONTACTS HERE!" << std::endl;
		return ;
	}
	while (1)
	{
		std::cout << "Select the index you want: ";
		std::cin >> show_index;
		if (show_index < 1 || show_index > 8)
		{
			std::cout << "You should type index between 1 and " << std::min(index, 8) << std::endl;
			continue ;
		}
		break ;
	}
	--show_index;
	std::cout << std::setfill(' ');
	std::cout << std::endl;
	std::cout << std::setw(20) << "first name: " << contacts[show_index].get_first_name() << std::endl;
	std::cout << std::setw(20) << "last name: " << contacts[show_index].get_last_name() << std::endl;
	std::cout << std::setw(20) << "nickname: " << contacts[show_index].get_nickname() << std::endl;
	std::cout << std::setw(20) << "phone number: " << contacts[show_index].get_phone_number() << std::endl;
	std::cout << std::setw(20) << "darkest secret: " << contacts[show_index].get_darkest_secret() << std::endl;
	std::cout << std::endl;
}
PhoneBook::PhoneBook()
{
	index = 0;
}

PhoneBook::~PhoneBook() {}