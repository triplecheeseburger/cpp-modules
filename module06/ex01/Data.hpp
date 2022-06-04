/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakim <hakim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 00:38:11 by hakim             #+#    #+#             */
/*   Updated: 2022/05/30 00:38:12 by hakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP06DATA
# define CPP06DATA

# include <iostream>

struct Data {
	int			x;
	int			y;
	std::string	name;
};

uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);

#endif
