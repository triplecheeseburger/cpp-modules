/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ReplaceForWinner.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakim <hakim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 20:39:14 by hakim             #+#    #+#             */
/*   Updated: 2022/05/03 20:39:16 by hakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACEFORWINNER
# define REPLACEFORWINNER

# include <fstream>
# include <iostream>

class ReplaceForWinner {

private:
	std::string		toReplace;
	std::string 	replacement;
	std::string 	file;
	std::ifstream	inputFileStream;
	std::ofstream	outputFileStream;

public:
	bool			setFile(std::string filepath);
	void 			replace(std::string toReplace, std::string replacement);
	ReplaceForWinner();
	~ReplaceForWinner();

};

#endif