/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jboumal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 16:39:20 by jboumal           #+#    #+#             */
/*   Updated: 2022/06/23 16:39:21 by jboumal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog( void )
{
	type = "Dog";
	std::cout << "Dog constructed" << std::endl;
}
Dog::Dog( Dog & src)
{
	std::cout << "Copy constructed" << std::endl;
	*this = src;
}
Dog::~Dog( void )
{
	std::cout << "Dog destructed" << std::endl;
}
Dog &	Dog::operator=( Dog const & rhs )
{
	std::cout << "Copy assignement operator called" << std::endl;
	type = rhs.type;

	return (*this);
}

void	Dog::makeSound( void )
{
	std::cout << "* waf *" << std::endl;
}
