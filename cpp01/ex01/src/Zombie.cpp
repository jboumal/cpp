/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jboumal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 14:33:31 by jboumal           #+#    #+#             */
/*   Updated: 2022/06/20 14:33:33 by jboumal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie( std::string name ) : _name(name)
{
	std::cout << _name << "Zombie instance constructed." << std::endl;
}

Zombie::Zombie()
{
	std::cout << "Zombie instance constructed." << std::endl;
}

Zombie::~Zombie( void )
{
	std::cout << _name << " destructed." << std::endl;
}

void Zombie::set_name( std::string name )
{
	this->_name = name;
}

void Zombie::announce( void ) const
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

