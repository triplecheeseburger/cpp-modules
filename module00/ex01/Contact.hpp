/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakim <hakim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 14:59:30 by hakim             #+#    #+#             */
/*   Updated: 2022/04/25 14:59:31 by hakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H_
# define CONTACT_H_
# include <iostream>

class	Contact {
	std::string first_name_;
	std::string last_name_;
	std::string nickname_;
	std::string phone_number_;
	std::string darkest_secret_;

public:
	std::string	get_first_name();
	std::string	get_last_name();
	std::string	get_nickname();
	std::string	get_phone_number();
	std::string	get_darkest_secret();
	void set_first_name();
	void set_last_name();
	void set_nickname();
	void set_phone_number();
	void set_darkest_secret();
	Contact();
	~Contact();
};

#endif
