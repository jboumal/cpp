/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jboumal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 13:41:15 by jboumal           #+#    #+#             */
/*   Updated: 2022/06/23 13:41:16 by jboumal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap( void )
{
	_name = "fr4gtr4p";
	_hit_points = 100;
	_energy_points = 100;
	_attack_damage = 30;
	std::cout << "Default FragTrap constructed" << std::endl;
}
FragTrap::FragTrap( std::string name )
{
	_name = name;
	_hit_points = 100;
	_energy_points = 100;
	_attack_damage = 30;
	std::cout << "FragTrap " << name << " constructed" << std::endl;
}
FragTrap::FragTrap( FragTrap & src)
{
	std::cout << "FragTrap " << _name << " copy constructed" << std::endl;
	*this = src;
}
FragTrap::~FragTrap( void )
{
	std::cout << "FragTrap " << _name << " destructed" << std::endl;
}

FragTrap &	FragTrap::operator=( FragTrap const & rhs )
{
	std::cout << "FragTrap copy assignement operator called" << std::endl;
	this->_name = rhs._name;
	this->_hit_points = rhs._hit_points;
	this->_energy_points = rhs._energy_points;
	this->_attack_damage = rhs._attack_damage;

	return (*this);
}

void FragTrap::highFivesGuys(void)
{
	if (_hit_points <= 0)
	{
		std::cout << "FragTrap " << "*" << _name << " is just a butch of scratch " << "*" << std::endl;
	}
	else
	{
		std::cout << "FragTrap " << _name << " wants to high five!";
		if (_energy_points <= 0)
		{
			std::cout << " but falls because he has no more energy...";
		}
		std::cout << std::endl;
	}
}
