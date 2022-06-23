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

#include "DiamondTrap.hpp"

int main ( void )
{
	DiamondTrap diamondtrap("Dany");
	diamondtrap.attack("bird");
	diamondtrap.takeDamage(5);
	diamondtrap.beRepaired(10);
	diamondtrap.highFivesGuys();
	diamondtrap.guardGate();
	diamondtrap.whoAmI();	
}
