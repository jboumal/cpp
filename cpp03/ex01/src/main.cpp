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

int main ( void )
{ 
	ScavTrap claptrap("Scav");
	claptrap.attack("bird");
	claptrap.takeDamage(5);
	for (int i = 0; i < 10; i++)
	{
		claptrap.beRepaired(10);
	}
	claptrap.attack("bird");
	claptrap.takeDamage(200);
	claptrap.beRepaired(10);
	claptrap.attack("bird");
}
