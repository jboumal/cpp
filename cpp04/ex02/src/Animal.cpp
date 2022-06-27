/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jboumal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 16:39:28 by jboumal           #+#    #+#             */
/*   Updated: 2022/06/23 16:39:30 by jboumal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal( void )
{
	std::cout << "Animal constructed" << std::endl;
}
Animal::Animal( Animal & src)
{
	std::cout << "Animal copy constructed" << std::endl;
	*this = src;
}
Animal::~Animal( void )
{
	std::cout << "Animal destructed" << std::endl;
}
Animal &	Animal::operator=( Animal const & rhs )
{
	std::cout << "Animal copy assignement operator called" << std::endl;
	type = rhs.type;

	return (*this);
}

std::string	Animal::getType( void ) const
{
	return(type);
}

void	Animal::setType( std::string s )
{
	type = s;
}