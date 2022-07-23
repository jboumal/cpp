/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jboumal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 15:02:14 by jboumal           #+#    #+#             */
/*   Updated: 2022/07/20 15:02:15 by jboumal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERTER_HPP
# define CONVERTER_HPP

# include <iostream>
# include <iomanip>
# include <string>

class Converter {

public:
	Converter( std::string val );
	~Converter( void );
	Converter(Converter & src);
	Converter & operator=(Converter const & rhs);

	char	getChar( void ) const;
	int		getInt( void ) const;
	float	getFloat( void ) const;
	double	getDouble( void ) const;
	bool	isIntDisp( void ) const;

private:
	Converter( void );

	char	_val_char;
	int		_val_int;
	bool	_int_disp;
	float	_val_float;
	double	_val_double;

};

std::ostream &	operator<<( std::ostream & o, Converter const & c );
bool isInt( std::string val);
bool isFloat( std::string val);
bool isDouble( std::string val);


#endif
