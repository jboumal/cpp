/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jboumal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 16:39:34 by jboumal           #+#    #+#             */
/*   Updated: 2022/06/23 16:39:35 by jboumal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat( void )
{
	type = "Cat";
	brain = new Brain;
	std::cout << "Cat constructed" << std::endl;
}
Cat::Cat( Cat & src)
{
	std::cout << "Cat copy constructed" << std::endl;
	brain = new Brain(*(src.brain));
	*this = src;
}
Cat::~Cat( void )
{
	delete brain;
	std::cout << "Cat destructed" << std::endl;
}
Cat &	Cat::operator=( Cat const & rhs )
{
	std::cout << "Copy assignement operator called" << std::endl;
	type = rhs.type;
	if (brain)
	{
		delete brain;
	}
	brain = new Brain(*(rhs.brain));
	return (*this);
}

void	Cat::makeSound( void )
{
	std::cout << "* miaou *" << std::endl;
}