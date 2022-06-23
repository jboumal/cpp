/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jboumal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 16:59:46 by jboumal           #+#    #+#             */
/*   Updated: 2022/06/22 16:59:47 by jboumal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

int main ( void )
{
	ScavTrap scavtrap;
	ScavTrap scavtrap2 (scavtrap);
	scavtrap.attack("bird");
	scavtrap.takeDamage(5);
	for (int i = 0; i < 10; i++)
	{
		scavtrap.beRepaired(10);
	}
	scavtrap.attack("bird");
	scavtrap.takeDamage(200);
	scavtrap.beRepaired(10);
	scavtrap2.attack("bird");
	scavtrap2 = scavtrap;
	scavtrap2.attack("bird");
}
