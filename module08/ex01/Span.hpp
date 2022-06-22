/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakim <hakim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 17:51:09 by hakim             #+#    #+#             */
/*   Updated: 2022/06/04 17:51:10 by hakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP08SPAN
# define CPP08SPAN

# include <vector>
# include <algorithm>

class Span {

private:
	unsigned int		size;
	std::vector<int>	storage;

	Span();

public:
	void addNumber(int n);
	void addByIterator(std::vector<int>::iterator begin, std::vector<int>::iterator end);
	unsigned int shortestSpan() const;
	unsigned int longestSpan() const;

	explicit Span(unsigned int N);
	Span(const Span& origin);
	Span& operator=(const Span& origin);
	~Span();

	class NoSpanException: public std::exception {
	public:
		const char* what(void) const throw();
	};
	class ImFullException: public std::exception {
	public:
		const char* what(void) const throw();
	};
};

#endif
