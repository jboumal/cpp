/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jboumal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 12:39:53 by jboumal           #+#    #+#             */
/*   Updated: 2022/06/21 12:39:54 by jboumal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/* Comparison operators */

bool	Fixed::operator>( Fixed const & rhs ) const
{
	return (this->getRawBits() > rhs.getRawBits());
}
bool	Fixed::operator<( Fixed const & rhs ) const
{
	return (this->getRawBits() < rhs.getRawBits());
}
bool	Fixed::operator>=( Fixed const & rhs ) const
{
	return (this->getRawBits() >= rhs.getRawBits());
}
bool	Fixed::operator<=( Fixed const & rhs ) const
{
	return (this->getRawBits() <= rhs.getRawBits());
}
bool	Fixed::operator==( Fixed const & rhs ) const
{
	return (this->getRawBits() == rhs.getRawBits());
}
bool	Fixed::operator!=( Fixed const & rhs ) const
{
	return (this->getRawBits() != rhs.getRawBits());
}


/* Arithmetic operators */

Fixed	Fixed::operator+( Fixed const & rhs ) const
{
	Fixed f;
	f.setRawBits(this->getRawBits() + rhs.getRawBits());
	return f;
}
Fixed	Fixed::operator-( Fixed const & rhs ) const
{
	Fixed f;
	f.setRawBits(this->getRawBits() - rhs.getRawBits());
	return f;
}
Fixed	Fixed::operator*( Fixed const & rhs ) const
{
	Fixed f;
	f.setRawBits((this->getRawBits() * rhs.getRawBits()) >> _nbits);
	return f;
}
Fixed	Fixed::operator/( Fixed const & rhs ) const
{
	Fixed f;
	f.setRawBits((this->getRawBits() << _nbits) / rhs.getRawBits());
	return f;
}
/* Increment/decrement operator*/

Fixed	Fixed::operator++( int )
{
	Fixed fixed(*this);
	_value ++;
	return fixed;
}
Fixed	Fixed::operator--( int )
{
	Fixed fixed(*this);
	_value --;
	return fixed;
}
Fixed &	Fixed::operator++( void )
{
	_value++;
	return (*this);
}
Fixed &	Fixed::operator--( void )
{
	this->setRawBits(this->getRawBits() - 1);
	return (*this);
}

/* Min/max functions overload */

Fixed & Fixed::min(Fixed & f1, Fixed & f2)
{
	return ((f1 < f2) ? f1 : f2);
}
const Fixed & Fixed::min(const Fixed & f1, const Fixed & f2)
{
	return ((f1 < f2) ? f1 : f2);
}
Fixed & Fixed::max(Fixed & f1, Fixed & f2)
{
	return ((f1 > f2) ? f1 : f2);
}
const Fixed & Fixed::max(const Fixed & f1, const Fixed & f2)
{
	return ((f1 > f2) ? f1 : f2);
}

/* ex 01 */

Fixed::Fixed( void )
{
	this->_value = 0;
}

Fixed::Fixed( const int value )
{
	this->_value = value << this->_nbits;
}

Fixed::Fixed( const float value )
{	
	this->_value = roundf(value * (1 << this->_nbits));
}

Fixed::Fixed(Fixed const & src)
{
	*this = src;
}

Fixed::~Fixed( void )
{
}

int	Fixed::getRawBits( void ) const
{
	return (this->_value);
}

void Fixed::setRawBits( int const raw )
{
	this->_value = raw;
}

float Fixed::toFloat( void ) const
{
	return ((float) this->_value / (1 << this->_nbits));
}

int Fixed::toInt( void ) const
{
	return (this->_value >> this->_nbits);
}

Fixed &	Fixed::operator=( Fixed const & rhs )
{
	this->_value = rhs.getRawBits();
	return (*this);
}

std::ostream &	operator<<( std::ostream & o, Fixed const & f )
{
	o << f.toFloat();
	return (o);
}

const int	Fixed::_nbits = 8;
