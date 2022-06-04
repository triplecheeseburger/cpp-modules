/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakim <hakim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 00:52:52 by hakim             #+#    #+#             */
/*   Updated: 2022/06/02 00:52:53 by hakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP07ITER
# define CPP07ITER

# include <cstddef>
# include <iostream>

template <typename T>
void iter(T* array, std::size_t length, void (*func)(T&)) {
	for (std::size_t i = 0; i < length; i++) {
		func(array[i]);
	}
}

template <typename T>
void printT(T& a) {
	std::cout << a << std::endl;
}

#endif
