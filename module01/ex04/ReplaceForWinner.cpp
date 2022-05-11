/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ReplaceForWinner.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakim <hakim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 20:39:21 by hakim             #+#    #+#             */
/*   Updated: 2022/05/03 20:39:23 by hakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ReplaceForWinner.hpp"

bool ReplaceForWinner::run(std::string filepath, std::string toReplace, std::string replacement)
{
	std::ifstream inputFileStream;
	std::ofstream outputFileStream;

	if (inputFileStream.is_open())
		inputFileStream.close();
	if (filepath == "")
	{
		std::cerr << "Invalid Filename: filename is empty" << std::endl;
		return (false);
	}
	inputFileStream.open(filepath);
	if (!inputFileStream.is_open())
	{
		std::cerr << "Fatal Error" << std::endl;
		return (false);
	}
	file = filepath;
	if (outputFileStream.is_open())
		outputFileStream.close();
	outputFileStream.open(file + ".replace");
	if (!outputFileStream.is_open())
	{
		std::cerr << "Fatal Error" << std::endl;
		return (false);
	}
	while (!inputFileStream.eof())
	{
		std::string temp;
		std::getline(inputFileStream, temp);
		if (!inputFileStream.eof())
			temp += "\n";
		std::string::size_type	prev = 0;
		std::string::size_type	index;
		while (prev < temp.size() && (index = temp.find(toReplace, prev)) != std::string::npos)
		{
			outputFileStream << temp.substr(prev, index - prev);
			outputFileStream << replacement;
			prev = std::min(index + toReplace.size(), temp.size());
		}
		outputFileStream << temp.substr(prev);
	}
	outputFileStream.close();
	inputFileStream.close();
	return (true);
}

ReplaceForWinner::ReplaceForWinner() {}
ReplaceForWinner::~ReplaceForWinner() {}
