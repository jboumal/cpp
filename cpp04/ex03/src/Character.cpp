/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jboumal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 14:39:33 by jboumal           #+#    #+#             */
/*   Updated: 2022/06/24 14:39:36 by jboumal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character( void )
{
	std::cout << "Character constructor called." << std::endl;
	_name = "Arthur";
	for (int i = 0; i < 4; i++)
	{
		_inventory[i] = 0;
	}
}
Character::Character( std::string name )
{
	std::cout << "Character constructor called." << std::endl;
	_name = name;
	for (int i = 0; i < 4; i++)
	{
		_inventory[i] = 0;
	}
}

Character::~Character( void )
{
	std::cout << "Character destructor called." << std::endl;
}
Character::Character (Character & src)
{
	std::cout << "Character copy constructed." << std::endl;
	*this = src;
}
Character &	Character::operator=( Character const & rhs )
{
	std::cout << "Character = called." << std::endl;
	_name = rhs.getName();
	for (int i = 0; i < 4; i++)
	{
		if (rhs._inventory[i])
			_inventory[i] = rhs._inventory[i]->clone();
		else
			_inventory[i] = 0;
	}
	return (*this);
}
std::string const & Character::getName() const
{
	return (_name);
}
void Character::equip(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (_inventory[i] == 0)
		{
			_inventory [i] = m;
			std::cout << _name << " equiped materia " << m->getType() << " on slot " << i << std::endl;
			return ;
		}
	}
}
void Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4 && _inventory[idx] != 0)
	{
		std::cout << _name << " unequiped materia " << _inventory[idx]->getType() << std::endl;
		_inventory [idx] = 0;
	}
}
void Character::use(int idx, ICharacter& target)
{
	std::cout << _name << " uses materia " << idx << std::endl;
	if (idx >= 0 && idx < 4 && _inventory[idx] != 0)
		_inventory[idx]->use(target);
	else
		std::cout << "But he can't find it" << std::endl;
}