/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakim <hakim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 20:09:02 by hakim             #+#    #+#             */
/*   Updated: 2022/05/04 20:09:03 by hakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL
# define HARL

# include <iostream>

class Harl
{

private:
	void debug();
	void info();
	void warning();
	void error();
	void filter();

public:
	void complain(std::string level);
	Harl();
	~Harl();
};

#endif
