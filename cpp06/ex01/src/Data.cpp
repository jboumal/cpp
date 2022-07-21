/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jboumal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 15:15:07 by jboumal           #+#    #+#             */
/*   Updated: 2022/07/21 15:15:08 by jboumal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data( void ) : _number(0)
{
}
Data::Data( int n ) : _number(n)
{
}
Data::~Data( void )
{
}
Data::Data(Data & src)
{
	*this = src;
}
Data & Data::operator=(Data const & rhs)
{
	(void) rhs;
	return *this;
}
int	Data::getNumber( void ) const
{
	return _number;
}
