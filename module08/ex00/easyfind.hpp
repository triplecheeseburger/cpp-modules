/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakim <hakim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 17:50:45 by hakim             #+#    #+#             */
/*   Updated: 2022/06/04 17:50:47 by hakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND
# define EASYFIND

# include <algorithm>
# include <stdexcept>

template <typename T>
typename T::iterator easyfind(T& container, int toFind) {
	typename T::iterator i = std::find(container.begin(), container.end(), toFind);
	if (i == container.end())
		throw std::runtime_error("not easyfind, difficultfind");
	return i;
}

#endif
