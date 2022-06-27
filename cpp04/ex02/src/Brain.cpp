/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jboumal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 19:08:47 by jboumal           #+#    #+#             */
/*   Updated: 2022/06/23 19:08:48 by jboumal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain( void )
{
	std::cout << "Brain constructed" << std::endl;
}
Brain::Brain( Brain & src)
{
	std::cout << "Brain copy constructed" << std::endl;
	for (int i = 0; i < 100; i++)
	{
		ideas[i] = src.ideas[i];
	}
	*this = src;
}
Brain::~Brain( void )
{
	std::cout << "Brain destructed" << std::endl;
}
Brain &	Brain::operator=( Brain const & rhs )
{
	std::cout << "Brain copy assignement operator called" << std::endl;
	for (int i = 0; i < 100; i++)
	{
		ideas[i] = rhs.ideas[i];
	}
	return (*this);
}
