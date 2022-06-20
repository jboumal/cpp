/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jboumal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 16:21:02 by jboumal           #+#    #+#             */
/*   Updated: 2022/06/20 16:21:04 by jboumal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) :_name(name), weapon(weapon)
{
	std::cout << name << " created with weapon " << weapon.getType() << std::endl;
}

HumanA::~HumanA()
{
	std::cout << this->_name << " destructed" << std::endl;
}

void HumanA::attack( void )
{
	std::cout << this->_name << " attacks with " << this->weapon.getType() << std::endl;
}