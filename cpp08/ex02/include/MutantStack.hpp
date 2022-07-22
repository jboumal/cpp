/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jboumal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 13:47:16 by jboumal           #+#    #+#             */
/*   Updated: 2022/07/22 13:47:17 by jboumal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANT_STACK_HPP
# define MUTANT_STACK_HPP
# include <stack>


template< typename T > 
class MutantStack : public std::stack<T> {

public:
	MutantStack() : std::stack<T>(){};
	virtual ~MutantStack() {};
	MutantStack(const MutantStack & src) {*this = src;};
	MutantStack &operator=(const MutantStack & rhs)
	{
		std::stack<T>::operator=(rhs);
		return (*this);
	};
	typedef typename std::stack<T>::container_type::iterator iterator;
	iterator	begin(void) {
		return this->c.begin();
	}
	iterator	end(void) {
		return this->c.end();
	}
};

#endif