/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jboumal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 16:59:59 by jboumal           #+#    #+#             */
/*   Updated: 2022/06/22 17:00:01 by jboumal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void ) : 
	_name("cl4ptr4p"), _hit_points(10), _energy_points(10), _attack_damage(0)
{
	std::cout << "Default Claptrap constructed" << std::endl;
}
ClapTrap::ClapTrap( std::string name ) :
	_name(name), _hit_points(10), _energy_points(10), _attack_damage(0)
{
	std::cout << "ClapTrap " << name << " constructed" << std::endl;
}
ClapTrap::ClapTrap( ClapTrap & src)
{
	std::cout << "ClapTrap " << _name << " copy constructed" << std::endl;
	*this = src;
}
ClapTrap::~ClapTrap( void )
{
	std::cout << "ClapTrap " << _name << " destructed" << std::endl;
}

ClapTrap &	ClapTrap::operator=( ClapTrap const & rhs )
{
	std::cout << "Claptrap copy assignement operator called" << std::endl;
	this->_name = rhs._name;
	this->_hit_points = rhs._hit_points;
	this->_energy_points = rhs._energy_points;
	this->_attack_damage = rhs._attack_damage;

	return (*this);
}

void ClapTrap::attack(const std::string& target)
{
	if (target.empty())
	{
		std::cout << "ClapTrap " << _name << " tries to attack but misses its target " << std::endl;
	}
	else if (_hit_points <= 0)
	{
		std::cout << "ClapTrap " << "*" << _name << " is just a butch of scratch " << "*" << std::endl;
	}
	else if (_energy_points <= 0)
	{
		std::cout << "ClapTrap " << "*" << _name << " needs a new battery " << "*" << std::endl;
	}
	else
	{
		std::cout << "ClapTrap " << _name << " attacks " << target << ", causing ";
		std::cout << _attack_damage << " points of damage!" << std::endl;
		_energy_points --;
	}
}
void ClapTrap::takeDamage(unsigned int amount)
{
	if (amount < 0)
	{
		amount = 0;
	}
	std::cout << "ClapTrap " << _name << " is hurt and loses " << amount;
	std::cout << " hit points." << std::endl;
	_hit_points -= amount;
	if (_hit_points < 0)
	{
		_hit_points = 0;
	}
}
void ClapTrap::beRepaired(unsigned int amount)
{
	if (amount < 0)
	{
		std::cout << "ClapTrap " << _name << " tries to repair but nothing happens " << std::endl;
	}
	else if (_hit_points <= 0) 
	{
		std::cout << "ClapTrap " << "*" << _name << " is just a butch of scratch " << "*" << std::endl;
	}
	else if (_energy_points <= 0)
	{
		std::cout << "ClapTrap " << "*" << _name << " needs a new battery " << "*" << std::endl;
	}
	else
	{
		std::cout << "ClapTrap " << _name << " repairs itself! He regains ";
		std::cout << amount << " hit points!" << std::endl;
		_energy_points --;
		_hit_points += amount;
	}
}
