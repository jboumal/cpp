/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jboumal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 16:39:28 by jboumal           #+#    #+#             */
/*   Updated: 2022/06/23 16:39:30 by jboumal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal( void )
{
	std::cout << "Animal constructed" << std::endl;
}
Animal::Animal( Animal & src)
{
	std::cout << "Copy constructed" << std::endl;
	*this = src;
}
Animal::~Animal( void )
{
	std::cout << "Animal destructed" << std::endl;
}
Animal &	Animal::operator=( Animal const & rhs )
{
	std::cout << "Copy assignement operator called" << std::endl;
	type = rhs.type;

	return (*this);
}

void	Animal::makeSound( void )
{
	std::cout << "* animal sound *" << std::endl;
}
