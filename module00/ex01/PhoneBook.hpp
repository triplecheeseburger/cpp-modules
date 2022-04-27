/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakim <hakim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 14:58:07 by hakim             #+#    #+#             */
/*   Updated: 2022/04/25 14:58:08 by hakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H_
# define PHONEBOOK_H_

# include <Contact.hpp>
# include <iomanip>

class	PhoneBook {
	Contact	contacts[8];
	int 	index;

public:
	void		Greeting();
	void		Farewell();
	void		AddContact();
	void		ShowPhoneBook();
	void		Search();
	std::string	MakeTen(std::string str);
	PhoneBook();
	~PhoneBook();
};

#endif