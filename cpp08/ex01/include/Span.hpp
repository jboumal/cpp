/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jboumal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 10:20:24 by jboumal           #+#    #+#             */
/*   Updated: 2022/07/22 10:20:26 by jboumal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP
# include <vector>
# include <algorithm>
# include <iterator>
# include "iostream"

class Span {

public:
	Span( void );
	Span( unsigned int N );
	~Span( void );
	Span( const Span & src );
	Span & operator=( Span const & rhs );

	void	addNumber(int n);
	void	addNumbers( std::vector<int>::iterator b,  std::vector<int>::iterator e);
	std::vector<int> getV( void ) const;
	unsigned int	shortestSpan( void ) const;
	unsigned int	longestSpan( void ) const;

private:
	
	unsigned int		_max;
	std::vector<int>	_v;
};

std::ostream &	operator<<( std::ostream & o, Span const & c );

#endif

