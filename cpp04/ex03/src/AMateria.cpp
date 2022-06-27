/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jboumal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 14:37:53 by jboumal           #+#    #+#             */
/*   Updated: 2022/06/24 14:37:55 by jboumal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria( void )
{
	std::cout << "AMateria constructed" << std::endl;
}
AMateria::AMateria( AMateria & src)
{
	std::cout << "AMateria copy constructed" << std::endl;
	*this = src;
}
AMateria::~AMateria( void )
{
	std::cout << "AMateria destructed" << std::endl;
}
AMateria &	AMateria::operator=( AMateria const & rhs )
{
	std::cout << "AMateria copy assignement operator called" << std::endl;
	type = rhs.getType();

	return (*this);
}

std::string const & AMateria::getType() const
{
	return type;
}

void AMateria::use(ICharacter& target)
{
	(void) target;
}