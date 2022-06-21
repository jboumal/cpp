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

#include "../include/Fixed.hpp"

Fixed::Fixed( void )
{
	std::cout << "Default constructor called" << std::endl;
	this->_value = 0;
}

Fixed::Fixed( const int value )
{
	std::cout << "Int constructor called" << std::endl;
	this->_value = value << this->_nbits;
}

Fixed::Fixed( const float value )
{	
	std::cout << "Float constructor called" << std::endl;
	this->_value = roundf(value * (1 << this->_nbits));
}

Fixed::Fixed(Fixed const & src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::~Fixed( void )
{
	std::cout << "Destructor called" << std::endl;
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
	std::cout << "Copy assignement operator called" << std::endl;
	this->_value = rhs.getRawBits();

	return (*this);
}

std::ostream &	operator<<( std::ostream & o, Fixed const & f )
{
	o << f.toFloat();
	return (o);
}


const int	Fixed::_nbits = 8;
