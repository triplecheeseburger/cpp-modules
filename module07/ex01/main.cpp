/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakim <hakim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 00:52:48 by hakim             #+#    #+#             */
/*   Updated: 2022/06/02 00:52:49 by hakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

#define SIZE 5

int main(void) {
	int intArr[SIZE] = {1, 19, 5, 4, -32};
	float floatArr[SIZE] = {-3.2f, 9.99f, 24.0f, 32.11f, -4.77f};
	double doubleArr[SIZE] = {1.1, 2.2, 3.3, 5.5, 99.9};
	std::string stringArr[SIZE] = {"abc", "def", "ghi", "jkl", "mno"};

	iter(intArr, SIZE, printT);
	iter(floatArr, SIZE, printT);
	iter(doubleArr, SIZE, printT);
	iter(stringArr, SIZE, printT);

	return 0;
}

