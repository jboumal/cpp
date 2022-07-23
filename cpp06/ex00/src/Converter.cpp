/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jboumal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 15:01:59 by jboumal           #+#    #+#             */
/*   Updated: 2022/07/20 15:02:00 by jboumal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Converter.hpp"

Converter::Converter( std::string val )
{
	_int_disp = true;

	if (val.length() == 0)
	{
		throw std::exception();
	}
	if (val.length() == 1 && isascii(val[0]) && !isdigit(val[0]))
	{
		_val_char = val[0];
		_val_int = static_cast<int>(_val_char);
		_val_float = static_cast<float>(_val_int);
		_val_double = static_cast<double>(_val_int);
	}
	else if (isInt(val))
	{
		_val_int = std::stoi(val);
		_val_char = static_cast<char>(_val_int);
		_val_float = static_cast<float>(_val_int);
		_val_double = static_cast<double>(_val_int);
	}
	else if (isFloat(val))
	{
		_val_float = std::stof(val);
		if (isnan(_val_float) || isinf(_val_float))
		{
			_int_disp = false;
		}
		_val_int = static_cast<int>(_val_float);
		_val_char = static_cast<char>(_val_int);
		_val_double = static_cast<double>(_val_float);
	}
	else if (isDouble(val))
	{
		_val_double = std::stod(val);
		if (isnan(_val_double) || isinf(_val_double))
		{
			_int_disp = false;
		}
		_val_int = static_cast<int>(_val_double);
		_val_char = static_cast<char>(_val_int);
		_val_float = static_cast<float>(_val_double);
	}
	else
	{
		throw std::exception();
	}
}
Converter::~Converter( void )
{

}
Converter::Converter( Converter & src) : _val_char(src.getChar()),
	_val_int(src.getInt()), _val_float(src.getFloat()), _val_double(src.getDouble())
{
	*this = src;
}
Converter &	Converter::operator=( Converter const & rhs )
{
	(void) rhs;
	return (*this);
}
char	Converter::getChar( void ) const
{
	return (_val_char);
}
int	Converter::getInt( void ) const
{
	return (_val_int);
}
float	Converter::getFloat( void ) const
{
	return (_val_float);
}
double	Converter::getDouble( void ) const
{
	return (_val_double);
}
bool	Converter::isIntDisp( void ) const
{
	return (_int_disp);
}
std::ostream &	operator<<( std::ostream & o, Converter const & c )
{
	if (!isascii(c.getChar()))
	{
		o << "char: impossible" << std::endl;
	}
	else if (iscntrl(c.getChar()))
	{
		o << "char: Not displayable" << std::endl;
	}
	else
	{
		o << "char: '" << c.getChar() << "'" << std::endl;
	}
	if (c.isIntDisp())
	{
		o << "int: " << c.getInt() << std::endl;
	}
	else
	{
		o << "int: Not displayable" << std::endl;
	}
	o << "float: " << c.getFloat();
	if (c.getInt() == c.getFloat())
		o << ".0";
	o << "f" << std::endl;
	o << "double: " << c.getDouble();
	if (c.getInt() == c.getDouble())
		o << ".0";
	return (o);
}
bool isInt( std::string val)
{
	unsigned long i = 0;
	if (val[0] == '-')
		i++;
	if (val.length() == 1 && i == 1)
		return false;
	while (i < val.length())
	{
		if (!isdigit(val[i]))
			return false;
		i++;
	}
	return true;
}

bool isFloat( std::string val)
{
	unsigned long i = 0;
	if (val[0] == '-')
		i++;
	if (val.length() == 1 && i == 1)
		return false;
	while (i < val.length())
	{
		if (!isdigit(val[i]))
		{
			if (val[i] != '.')
				return false;
			else
				break ;
		}
		i++;
	}
	i++;
	while (i < val.length())
	{
		if (!isdigit(val[i]))
		{
			if (val[i] == 'f' && i == val.length() - 1)
				return true;
			else
				break ;
		}
		i++;
	}
	return false;
}

bool isDouble( std::string val)
{
	unsigned long i = 0;
	if (val[0] == '-')
		i++;
	if (val.length() == 1 && i == 1)
		return false;
	while (i < val.length())
	{
		if (!isdigit(val[i]))
		{
			if (val[i] != '.')
				return false;
			else
				break ;
		}
		i++;
	}
	i++;
	while (i < val.length())
	{
		if (!isdigit(val[i]))
		{
			return false;
		}
		i++;
	}
	return true;
}