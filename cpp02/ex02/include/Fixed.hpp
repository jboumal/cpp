/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jboumal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 12:40:03 by jboumal           #+#    #+#             */
/*   Updated: 2022/06/21 12:40:04 by jboumal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
# include <cmath>
class Fixed
{

	public:
		Fixed( void );
		Fixed( const int value );
		Fixed( const float value);
		Fixed(Fixed const & src);
		~Fixed( void );

		int	getRawBits( void ) const;
		void setRawBits( int const raw );
		float toFloat( void ) const;
		int toInt( void ) const;

		Fixed &	operator=( Fixed const & rhs );

		bool	operator>( Fixed const & rhs ) const;
		bool	operator<( Fixed const & rhs ) const;
		bool	operator>=( Fixed const & rhs ) const;
		bool	operator<=( Fixed const & rhs ) const;
		bool	operator==( Fixed const & rhs ) const;
		bool	operator!=( Fixed const & rhs ) const;

		Fixed	operator+( Fixed const & rhs ) const;
		Fixed	operator-( Fixed const & rhs ) const;
		Fixed	operator*( Fixed const & rhs ) const;
		Fixed	operator/( Fixed const & rhs ) const;

		//post increment
		Fixed	operator++( int const raw );
		Fixed	operator--( int const raw );
		//pre increment
		Fixed &	operator++( void );
		Fixed &	operator--( void );


	private:
		int					_value;
		static const int	_nbits;

};

std::ostream &	operator<<( std::ostream & o, Fixed const & f );

#endif
