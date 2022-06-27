/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jboumal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 14:38:11 by jboumal           #+#    #+#             */
/*   Updated: 2022/06/24 14:38:13 by jboumal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice( void )
{
	std::cout << "Ice constructed" << std::endl;
	type = "ice";
}

Ice::Ice( Ice & src)
{
	std::cout << "Ice copy constructed" << std::endl;
	*this = src;
}

Ice::~Ice( void )
{
	std::cout << "Ice destructed" << std::endl;
}

Ice &	Ice::operator=( Ice const & rhs )
{
	std::cout << "Ice copy assignement operator called" << std::endl;
	type = rhs.getType();

	return (*this);
}

Ice* Ice::clone() const
{
	Ice *cureClone = new Ice;
	cureClone->type = type;
	return cureClone;
}

void Ice::use(ICharacter& target)
{
	std::cout << "Ice: * shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
