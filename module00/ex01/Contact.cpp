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
	std::cin >> first_name_;
}

void Contact::set_last_name()
{
	std::cout << "last name: ";
	std::cin >> last_name_;
}

void Contact::set_nickname()
{
	std::cout << "nickname: ";
	std::cin >> nickname_;
}

void Contact::set_phone_number()
{
	std::cout << "phone number: ";
	std::cin >> phone_number_;
}

void Contact::set_darkest_secret()
{
	std::cout << "darkest secret: ";
	std::cin >> darkest_secret_;
}

Contact::Contact() {}

Contact::~Contact() {}
