/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakim <hakim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 14:59:23 by hakim             #+#    #+#             */
/*   Updated: 2022/04/25 14:59:24 by hakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

std::string Contact::get_first_name()
{
	return first_name_;
}

std::string Contact::get_last_name()
{
	return last_name_;
}

std::string Contact::get_nickname()
{
	return nickname_;
}

std::string Contact::get_phone_number()
{
	return phone_number_;
}

std::string Contact::get_darkest_secret()
{
	return darkest_secret_;
}

void Contact::set_first_name()
{
	std::cout << "first name: ";
	std::getline(std::cin, first_name_);
	if (first_name_.length() <= 0)
		set_first_name();
}

void Contact::set_last_name()
{
	std::cout << "last name: ";
	std::getline(std::cin, last_name_);
	if (last_name_.length() <= 0)
			set_last_name();
}

void Contact::set_nickname()
{
	std::cout << "nickname: ";
	std::getline(std::cin, nickname_);
	if (nickname_.length() <= 0)
		set_nickname();
}

void Contact::set_phone_number()
{
	std::cout << "phone number: ";
	std::getline(std::cin, phone_number_);
	if (phone_number_.length() <= 0)
		set_phone_number();
}

void Contact::set_darkest_secret()
{
	std::cout << "darkest secret: ";
	std::getline(std::cin, darkest_secret_);
	if (darkest_secret_.length() <= 0)
		set_darkest_secret();
}

Contact::Contact() {}

Contact::~Contact() {}
