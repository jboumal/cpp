/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jboumal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 14:33:26 by jboumal           #+#    #+#             */
/*   Updated: 2022/06/20 14:33:27 by jboumal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name );

void randomChump( std::string name )
{
	Zombie zombie(name);
	zombie.announce();
}

Zombie* newZombie( std::string name )
{
	Zombie *zombie = new Zombie(name);
	return (zombie);
}

int	main( void )
{
	const int n = 5;
	Zombie	*horde;

	horde = zombieHorde(n, "Albert");
	for (int i = 0; i < n; i++)
	{
		horde[i].announce();
	}
	delete [] horde;
	return (0);
}