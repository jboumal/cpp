/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jboumal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 12:22:26 by jboumal           #+#    #+#             */
/*   Updated: 2022/06/22 12:22:28 by jboumal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point ( void )
{
}

Point::~Point ( void )
{
}

Point::Point ( float a, float b ) : x(a), y(b)
{
}

Point::Point(Point const & src) : x(src.x), y(src.y)
{
}
	
const Fixed & Point::getx( void ) const
{
	return (x);
}
const Fixed & Point::gety( void ) const
{
	return (y);
}

Point &	Point::operator=( Point & rhs )
{
	return (rhs);
}