/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakim <hakim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 17:51:35 by hakim             #+#    #+#             */
/*   Updated: 2022/06/04 17:51:36 by hakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK
# define MUTANTSTACK

# include <stack>

template <typename T>
class MutantStack: public std::stack<T> {

public:
	typedef typename std::stack<T>::container_type::iterator iterator;
	typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;

	iterator begin(void) {
		return this->c.begin();
	}
	iterator end(void) {
		return this->c.end();
	}
	reverse_iterator rbegin(void) {
		return this->c.rbegin();
	}
	reverse_iterator rend(void) {
		return this->c.rend();
	}

	MutantStack& operator=(const MutantStack& origin) {
		if (this != &origin)
			std::stack<T>::operator=(origin);
		return *this;
	}
	MutantStack() {}
	MutantStack(const MutantStack& origin) {
		*this = origin;
	}
	~MutantStack() {}
};

#endif
