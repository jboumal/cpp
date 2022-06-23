/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jboumal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 17:49:38 by jboumal           #+#    #+#             */
/*   Updated: 2022/06/22 17:49:39 by jboumal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void )
{
	_name = "sc4vtr4p";
	_hit_points = 100;
	_energy_points = 50;
	_attack_damage = 20;
	std::cout << "Default ScavTrap constructed" << std::endl;
}
ScavTrap::ScavTrap( std::string name )
{
	_name = name;
	_hit_points = 100;
	_energy_points = 50;
	_attack_damage = 20;
	std::cout << "ScavTrap " << name << " constructed" << std::endl;
}
ScavTrap::ScavTrap( ScavTrap & src)
{
	std::cout << "ScavTrap " << _name << " copy constructed" << std::endl;
	*this = src;
}
ScavTrap::~ScavTrap( void )
{
	std::cout << "ScavTrap " << _name << " destructed" << std::endl;
}

ScavTrap &	ScavTrap::operator=( ScavTrap const & rhs )
{
	std::cout << "ScavTrap copy assignement operator called" << std::endl;
	this->_name = rhs._name;
	this->_hit_points = rhs._hit_points;
	this->_energy_points = rhs._energy_points;
	this->_attack_damage = rhs._attack_damage;

	return (*this);
}

void ScavTrap::guardGate( void )
{
	if (_hit_points <= 0)
	{
		std::cout << "ScavTrap " << "*" << _name << " is just a butch of scratch " << "*" << std::endl;
	}
	else
	{
		std::cout << "ScavTrap " << _name << " is in Gate keeper mode";
		if (_energy_points <= 0)
		{
			std::cout << " but he needs a new battery";
		}
		std::cout << std::endl;
	}
}

void ScavTrap::attack(const std::string& target)
{
	if (target.empty())
	{
		std::cout << "ScavTrap " << _name << " tries to attack but falls into the void " << std::endl;
	}
	else if (_hit_points <= 0)
	{
		std::cout << "ScavTrap " << "*" << _name << " is just a big butch of scratch" << "*" << std::endl;
	}
	else if (_energy_points <= 0)
	{
		std::cout << "ScavTrap " << "*" << _name << " is out of energy " << "*" << std::endl;
	}
	else
	{
		std::cout << "ScavTrap " << _name << " attacks " << target << ", causing ";
		std::cout << _attack_damage << " points of damage!" << std::endl;
		_energy_points --;
	}
}
