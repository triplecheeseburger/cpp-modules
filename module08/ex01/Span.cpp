/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakim <hakim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 17:51:10 by hakim             #+#    #+#             */
/*   Updated: 2022/06/04 17:51:11 by hakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"


void Span::addNumber(int n)
{
	if (storage.size() == size)
		throw ImFullException();
	storage.push_back(n);
}

void Span::addByIterator(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	std::vector<int> toInsert(begin, end);
	if (size < storage.size() + toInsert.size())
		throw ImFullException();
	storage.insert(storage.end(), begin, end);
}

unsigned int Span::shortestSpan() const
{
	if (storage.size() < 2)
		throw NoSpanException();
	std::vector<int>temp = storage;
	std::sort(temp.begin(), temp.end());
	int shortest = *(temp.begin() + 1) - *temp.begin();
	for (std::vector<int>::iterator i = temp.begin() + 1; i < temp.end() - 1; i++) {
		if (*(i + 1) - *i < shortest)
			shortest = *(i + 1) - *i;
	}
	return shortest;
}

unsigned int Span::longestSpan() const
{
	if (storage.size() < 2)
		throw NoSpanException();
	std::vector<int>temp = storage;
	std::sort(temp.begin(), temp.end());
	return *(temp.end() - 1) - *temp.begin();
}

Span::Span() {}

Span::Span(unsigned int N)
{
	size = N;
}

Span::Span(const Span &origin): size(origin.size), storage(origin.storage)
{}

Span &Span::operator=(const Span &origin)
{
	if (this != &origin) {
		size = origin.size;
		storage = std::vector<int>(origin.storage);
	}
	return (*this);
}

Span::~Span() {}

const char *Span::NoSpanException::what(void) const throw()
{
	return "Not enough elements to find any span.";
}

const char *Span::ImFullException::what(void) const throw()
{
	return "I'm already full.";
}
