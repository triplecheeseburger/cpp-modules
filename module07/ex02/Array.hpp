/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakim <hakim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 09:47:42 by hakim             #+#    #+#             */
/*   Updated: 2022/06/02 09:47:44 by hakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP07ARRAY
# define CPP07ARRAY

#include <exception>

template <typename T>
class Array {

private:
	std::size_t	_size;
	T*			arr;

public:

	std::size_t size(void) const {
		return _size;
	}

	Array(): _size(0), arr(NULL) {}

	explicit Array(std::size_t n): _size(n), arr(NULL) {
		if (_size != 0)
			arr = new T[_size];
	}

	Array(const Array& origin): _size(origin._size), arr(NULL) {
		if (_size != 0)
			arr = new T[_size];
		for (std::size_t i = 0; i < _size; i++)
			arr[i] = origin.arr[i];
	}

	Array& operator=(const Array& origin) {
		if (this != &origin) {
			if (arr != NULL) {
				delete[] arr;
				arr = NULL;
			}
			_size = origin._size;
			if (_size != 0)
				arr = new T[_size];
			for (std::size_t i = 0; i < _size; i++)
				arr[i] = origin.arr[i];
		}
		return *this;
	}

	T& operator[](std::size_t i) {
		if (i >= _size)
			throw IndexOutOfRangeException();
		return arr[i];
	}

	~Array() {
		if (arr != NULL) {
			delete[] arr;
			arr = NULL;
		}
	}

	class IndexOutOfRangeException: public std::exception {
		const char* what(void) const throw() {
			return "index out of range";
		}
	};
};

#endif
