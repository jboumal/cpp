/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jboumal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 12:23:59 by jboumal           #+#    #+#             */
/*   Updated: 2022/06/22 12:24:02 by jboumal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP
# include "Fixed.hpp"

class Point
{

public:
	Point( void );
	Point( const float a, const float b );
	~Point( void );
	Point(Point const & src);

	Point &	operator=( Point & rhs );

	const Fixed &	getx( void ) const;
	const Fixed &	gety( void ) const;

private:
	Fixed const x;
	Fixed const y;

};

/* • Private members:

◦ Anything else useful.
• Public members:
◦ A copy constructor.
◦ A copy assignment operator overload.
◦ A destructor.
◦ Anything else useful.*/

#endif