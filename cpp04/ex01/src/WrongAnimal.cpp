/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jboumal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 16:39:28 by jboumal           #+#    #+#             */
/*   Updated: 2022/06/23 16:39:30 by jboumal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void )
{
	std::cout << "WrongAnimal constructed" << std::endl;
}
WrongAnimal::WrongAnimal( WrongAnimal & src)
{
	std::cout << "Copy constructed" << std::endl;
	*this = src;
}
WrongAnimal::~WrongAnimal( void )
{
	std::cout << "WrongAnimal destructed" << std::endl;
}
WrongAnimal &	WrongAnimal::operator=( WrongAnimal const & rhs )
{
	std::cout << "Copy assignement operator called" << std::endl;
	type = rhs.type;

	return (*this);
}

void	WrongAnimal::makeSound( void )
{
	std::cout << "* animal sound *" << std::endl;
}
