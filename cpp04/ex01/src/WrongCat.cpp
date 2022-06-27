/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jboumal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 16:39:34 by jboumal           #+#    #+#             */
/*   Updated: 2022/06/23 16:39:35 by jboumal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat( void )
{
	type = "WrongCat";
	std::cout << "WrongCat constructed" << std::endl;
}
WrongCat::WrongCat( WrongCat & src)
{
	std::cout << "Copy constructed" << std::endl;
	*this = src;
}
WrongCat::~WrongCat( void )
{
	std::cout << "WrongCat destructed" << std::endl;
}
WrongCat &	WrongCat::operator=( WrongCat const & rhs )
{
	std::cout << "Copy assignement operator called" << std::endl;
	type = rhs.type;

	return (*this);
}

void	WrongCat::makeSound( void )
{
	std::cout << "* miaou *" << std::endl;
}