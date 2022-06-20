/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jboumal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 16:05:06 by jboumal           #+#    #+#             */
/*   Updated: 2022/06/20 16:05:07 by jboumal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{
	std::cout << "Weapon constructed" << std::endl;
}

Weapon::Weapon( std::string type )
{
	std::cout << type << " weapon constructed" << std::endl;
	this->_type = type;
}

Weapon::~Weapon()
{
	std::cout << "Weapon destructed" << std::endl;
}

void Weapon::setType( std::string type )
{
	this->_type = type;
}

std::string	Weapon::getType( void ) const
{
	const std::string &type = this->_type;

	return (type);
}