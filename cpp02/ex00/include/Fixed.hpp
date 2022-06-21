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

class Fixed
{

	public:
		Fixed( void );
		Fixed(Fixed const & src);
		~Fixed( void );

		int	getRawBits( void ) const;
		void setRawBits( int const raw );

		Fixed &	operator=( Fixed const & rhs );

	private:
		int					_value;
		static const int	_nbits;

};
#endif
