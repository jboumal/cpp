/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jboumal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 16:39:12 by jboumal           #+#    #+#             */
/*   Updated: 2022/06/23 16:39:13 by jboumal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
	const int	n = 1 * 2;
	Animal	*animals[n];
	for (int i = 0; i < n / 2; i++)
	{
		animals[i] = new Dog;
	}
	for (int i = n / 2; i < n; i++)
	{
		animals[i] = new Cat;
	}
	Animal *dog = new Dog;
	*dog = *animals[0];
	dog->setType("unicorn");
	std::cout << "-dog type: " << dog->getType() << " -animal type: " << animals[0]->getType() << std::endl;
	delete dog;
	for (int i = 0; i < n; i++)
	{
		animals[i]->makeSound();
	}	
	for (int i = 0; i < n; i++)
	{
		delete animals[i];
	}
	//Animal animal;
}