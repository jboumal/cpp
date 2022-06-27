/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jboumal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 14:38:18 by jboumal           #+#    #+#             */
/*   Updated: 2022/06/24 14:38:19 by jboumal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure( void )
{
	std::cout << "Cure constructed" << std::endl;
	type = "cure";
}

Cure::Cure( Cure & src)
{
	std::cout << "Cure copy constructed" << std::endl;
	*this = src;
}

Cure::~Cure( void )
{
	std::cout << "Cure destructed" << std::endl;
}

Cure &	Cure::operator=( Cure const & rhs )
{
	std::cout << "Cure copy assignement operator called" << std::endl;
	type = rhs.getType();

	return (*this);
}

Cure* Cure::clone() const
{
	Cure *cureClone = new Cure;
	cureClone->type = type;
	return cureClone;
}

void Cure::use(ICharacter& target)
{
	std::cout << "Cure: * heals " << target.getName() << "'s wounds *" << std::endl;
}