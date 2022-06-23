/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jboumal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 14:31:13 by jboumal           #+#    #+#             */
/*   Updated: 2022/06/23 14:31:14 by jboumal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( void ) : ClapTrap("claptrap"), ScavTrap("scavtrap"), FragTrap("fragtrap")
{
	_name = "di4mondtr4p_clap_name";
	std::cout << "Default DiamondTrap constructed" << std::endl;
}
DiamondTrap::DiamondTrap( std::string name ) : ClapTrap(name), ScavTrap(name), FragTrap(name)
{
	_name = name + "_clap_name";
	std::cout << "DiamondTrap " << _name << " constructed" << std::endl;
}
DiamondTrap::DiamondTrap( DiamondTrap & src) : ClapTrap(src._name), ScavTrap(src._name), FragTrap(src._name)
{
	std::cout << "DiamondTrap " << _name << " copy constructed" << std::endl;
	*this = src;
}
DiamondTrap::~DiamondTrap( void )
{
	std::cout << "DiamondTrap " << _name << " destructed" << std::endl;
}

DiamondTrap &	DiamondTrap::operator=( DiamondTrap const & rhs )
{
	std::cout << "DiamondTrap copy assignement operator called" << std::endl;
	this->_name = rhs._name;

	return (*this);
}

void	DiamondTrap::whoAmI( void )
{
	std::cout << "ClapTrap name is " << ClapTrap::_name << ". DiamondTrap name is " << _name << "." << std::endl;

}
