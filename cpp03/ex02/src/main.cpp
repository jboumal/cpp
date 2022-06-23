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

#include "FragTrap.hpp"
#include "ClapTrap.hpp"

int main ( void )
{
	FragTrap fragtrap;
	FragTrap fragtrap2 (fragtrap);
	fragtrap.attack("bird");
	fragtrap.takeDamage(5);
	for (int i = 0; i < 10; i++)
	{
		fragtrap.beRepaired(10);
	}
	fragtrap.attack("bird");
	fragtrap.takeDamage(200);
	fragtrap.beRepaired(10);
	fragtrap2.attack("bird");
	fragtrap2.highFivesGuys();
	fragtrap2 = fragtrap;
	fragtrap2.attack("bird");
	fragtrap2.highFivesGuys();
}
