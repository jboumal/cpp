/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jboumal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 16:21:09 by jboumal           #+#    #+#             */
/*   Updated: 2022/06/20 16:21:11 by jboumal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) :_name(name)
{
	this->weapon = NULL;
	std::cout << name << " created" << std::endl;
}

HumanB::~HumanB()
{
	std::cout << this->_name << " destructed" << std::endl;
}

void HumanB::attack( void )
{
	if (this->weapon)
	{
		std::cout << this->_name << " attacks with " << this->weapon->getType() << std::endl;
	}
	else
	{
		std::cout << this->_name << " needs a weapon to attack" << std::endl;
	}
}

void HumanB::setWeapon( Weapon &weapon )
{
	Weapon *weaponPTR = &weapon;
	this->weapon = weaponPTR;
	std::cout << this->_name << " was assigned weapon " << this->weapon->getType() << std::endl;
}