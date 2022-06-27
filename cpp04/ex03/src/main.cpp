/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jboumal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 14:38:22 by jboumal           #+#    #+#             */
/*   Updated: 2022/06/24 14:38:23 by jboumal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();
	Ice *ice = new Ice();
	Cure *cure = new Cure();
	src->learnMateria(ice);
	src->learnMateria(cure);
	ICharacter* me = new Character("me");
	AMateria* tmp[2];
	tmp[0] = src->createMateria("ice");
	me->equip(tmp[0]);
	tmp[1] = src->createMateria("cure");
	me->equip(tmp[1]);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	me->use(2, *bob);
	delete tmp[0];
	delete tmp[1];
	delete ice;
	delete cure;
	delete bob;
	delete me;
	delete src;
	return 0;
}