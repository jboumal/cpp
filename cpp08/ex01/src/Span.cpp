/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jboumal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 10:20:12 by jboumal           #+#    #+#             */
/*   Updated: 2022/07/22 10:20:13 by jboumal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span( void )
{
}
Span::Span( unsigned int N ) : _max(N)
{
}
Span::~Span( void )
{
}
Span::Span( const Span & src )
{
	*this = src;
}
Span & Span::operator=( Span const & rhs )
{
	std::vector<int>			vr = rhs.getV();
	std::vector<int>::iterator	it;
	std::vector<int>::iterator	ite = vr.end();
	std::vector<int>::iterator	it2 = vr.begin();

	_max = rhs._max;
	for (it = vr.begin(); it != ite; it++)
	{
		addNumber(*it);
		it2++;
	}

	return *this;
}
void	Span::addNumber(int n)
{
	if (_v.size() >= _max)
	{
		throw std::exception();
	}
	else
	{
		_v.push_back(n);
	}
}
std::vector<int> Span::getV( void ) const
{
	return (_v);
}
std::ostream &	operator<<( std::ostream & o, Span const & c )
{
	std::vector<int> v = c.getV();
	std::vector<int>::iterator	it;
	std::vector<int>::iterator	ite = v.end();
	for (it = v.begin(); it != ite; it++)
	{
		o << *it;
		if (it != ite - 1)
			o << ", ";
	}
	return o;
}
unsigned int	Span::shortestSpan( void ) const
{
	unsigned int	shortest = UINT32_MAX;
	unsigned int	dif;

	if (_v.size() <= 1)
	{
		throw std::exception();
	}
	std::vector<int> 			v = getV();
	std::vector<int>::iterator	it;
	std::vector<int>::iterator	it2;
	std::vector<int>::iterator	ite = v.end();

	for (it = v.begin(); it != ite - 1; it++)
	{
		for (it2 = it; it2 != ite ; it2++)
		{
			if (*(it2) > *(it))
				dif = *(it2) - *(it);
			else
				dif = *(it) - *(it2);
			if (dif < shortest)
				shortest = dif;
		}
	}
	return dif;
}
unsigned int	Span::longestSpan( void ) const
{
	if (_v.size() <= 1)
	{
		throw std::exception();
	}
	return (*max_element(_v.begin(), _v.end()) - *min_element(_v.begin(), _v.end()));
}