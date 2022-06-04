/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakim <hakim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 00:38:05 by hakim             #+#    #+#             */
/*   Updated: 2022/05/30 00:38:06 by hakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

int main(void)
{
	Data* data = new Data;
	Data* newData;
	uintptr_t raw;

	data->x = 72;
	data->y = 48;
	data->name = "coordinate";

	std::cout << "Data's x: " << data->x << " y: " << data->y << " " << data->name << std::endl;
	raw = serialize(data);
	std::cout << "raw:       " << std::hex << raw << std::dec << std::endl;
	std::cout << "data:    " << data << std::endl;

	newData = deserialize(raw);
	std::cout << "newData: " << newData << std::endl;
	std::cout << "newData's x: " << newData->x << " y: " << newData->y << " " << data->name << std::endl;
	delete data;
}
