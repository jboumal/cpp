/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jboumal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 12:39:46 by jboumal           #+#    #+#             */
/*   Updated: 2022/06/21 12:39:48 by jboumal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

#include <iostream>
int main( void ) {
	Fixed a;

	std::cout << "Test arithmetic operators" <<std::endl;
	Fixed b( Fixed( 5.05f ) + Fixed( 2 ) );
	Fixed const c( Fixed( 5.05f ) - Fixed( 2 ) );
	Fixed const d( Fixed( 5.05f ) * Fixed( 2 ) );
	Fixed const e( Fixed( 5.05f ) / Fixed( 2 ) );
	std::cout << b << std::endl;
	std::cout << c << std::endl;
	std::cout << d << std::endl;
	std::cout << e << std::endl;

	std::cout << "Test increment/decrement operators" <<std::endl;
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << --a << std::endl;
	std::cout << a << std::endl;
	std::cout << a-- << std::endl;
	std::cout << a << std::endl;

	std::cout << "Test comparison operators" <<std::endl;
	std::cout << (a == b) << std::endl;
	std::cout << (a != b) << std::endl;
	std::cout << (a <= b) << std::endl;
	std::cout << (a > b) << std::endl;
	std::cout << (a >= a) << std::endl;
	std::cout << (a > a) << std::endl;

	std::cout << "Test min/max functions" <<std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
	std::cout << Fixed::max( a, c ) << std::endl;
	std::cout << Fixed::min( c, d ) << std::endl;

	return 0;
}