/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakim <hakim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 09:47:39 by hakim             #+#    #+#             */
/*   Updated: 2022/06/02 09:47:42 by hakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iostream>

#define MAX_VAL 750
int givenMain(void)
{
	Array<int> numbers(MAX_VAL);
	int* mirror = new int[MAX_VAL];
	srand(time(NULL));
	for (int i = 0; i < MAX_VAL; i++)
	{
		const int value = rand();
		numbers[i] = value;
		mirror[i] = value;
	}
	//SCOPE
	{
		Array<int> tmp = numbers;
		Array<int> test(tmp);
	}

	for (int i = 0; i < MAX_VAL; i++)
	{
		if (mirror[i] != numbers[i])
		{
			std::cerr << "didn't save the same value!!" << std::endl;
			return 1;
		}
	}
	try
	{
		numbers[-2] = 0;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		numbers[MAX_VAL] = 0;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	for (int i = 0; i < MAX_VAL; i++)
	{
		numbers[i] = rand();
	}
	delete [] mirror;//
	return 0;
}

int myMain(void) {
	Array<int> intArr(10);
	Array<std::string> stringArr(5);

	for (int i = 0; i < 10; i++)
		intArr[i] = i;

	stringArr[0] = "Hi";
	stringArr[1] = "my";
	stringArr[2] = "name";
	stringArr[3] = "is";
	stringArr[4] = "hakim";

	Array<int> copyIntArr(intArr);
	Array<int> copyIntArr2;
	copyIntArr2 = intArr;

	for (int i = 0; i < 10; i++) {
		std::cout << "copyIntArr[i]: " << copyIntArr[i] << "\t copyIntArr2[i]: " << copyIntArr2[i] << std::endl;
	}
	for (int i = 0; i < 10; i++) {
		copyIntArr[i] += 100;
		copyIntArr2[i] += 10000;
	}
	std::cout << "original: ";
	for (int i = 0; i < 10; i++) {
		std::cout << intArr[i] << " ";
	}
	std::cout << std::endl;
	for (int i = 0; i < 10; i++) {
		std::cout << "copyIntArr[i]: " << copyIntArr[i] << "\t copyIntArr2[i]: " << copyIntArr2[i] << std::endl;
	}

	Array<std::string> evalStringArr = stringArr;
	evalStringArr[4] = "evaluator";
	for (int i = 0; i < 5; i++) {
		std::cout << stringArr[i] << " ";
	}
	std::cout << std::endl;
	for (int i = 0; i < 5; i++) {
		std::cout << evalStringArr[i] << " ";
	}
	std::cout << std::endl;

	try {
		intArr[10] = 0;
		intArr[-1] = 0;
		intArr[99] = 0;
		evalStringArr[10] = " ";
		evalStringArr[-1] = " ";
		evalStringArr[99] = " ";
	} catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
	}
	return 0;
}

int main(void) {
	givenMain();
	myMain();
	return 0;
}
