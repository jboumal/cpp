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
	Zombie	*albert;

	albert = newZombie("albert");
	randomChump("charles");
	albert->announce();
	delete(albert);
	return (0);
}