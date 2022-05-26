/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakim <hakim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 11:17:25 by hakim             #+#    #+#             */
/*   Updated: 2022/05/25 11:17:27 by hakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERSION
# define CONVERSION

# include <iostream>
# include <exception>
# include <cstdlib>

class Conversion {

private:
	double		value;
	bool		error;
	Conversion();

public:
	char	toChar(void) const;
	int		toInt(void) const;
	float	toFloat(void) const;
	double	toDouble(void) const;
	void	print(void) const;

	explicit Conversion(std::string str);
	Conversion(const Conversion& origin);
	Conversion& operator=(const Conversion& origin);
	~Conversion();
};

#endif
