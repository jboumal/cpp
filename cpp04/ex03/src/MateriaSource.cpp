/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jboumal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 14:42:12 by jboumal           #+#    #+#             */
/*   Updated: 2022/06/24 14:42:13 by jboumal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource( void )
{
	std::cout << "Msrc constructor" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		source[i] = 0;
	}
}

MateriaSource::~MateriaSource()
{
	std::cout << "Msrc destructor" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (source[i])
			delete source[i];
	}
}
MateriaSource::MateriaSource (MateriaSource & src)
{
	*this = src;
}
MateriaSource &	MateriaSource::operator=( MateriaSource const & rhs )
{
	for (int i = 0; i < 4; i++)
	{
		if (rhs.source[i] != 0)
			source[i] = rhs.source[i]->clone();
		else
			source[i] = 0;
	}
	return (*this);
}
void MateriaSource::learnMateria(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (source[i] == 0)
		{
			source[i] = m->clone();
			return ;
		}
	}
}
AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
	{
		if (source[i] != 0 && source[i]->getType().compare(type) == 0 )
		{
			return source[i]->clone();
		}
	}
	return 0;
}
