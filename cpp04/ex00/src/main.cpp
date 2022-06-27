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
	Animal *cat = new Cat;
	Animal *dog = new Dog;
	cat->makeSound();
	dog->makeSound();
	delete cat;
	delete dog;
	WrongAnimal *wrongcat = new WrongCat;
	wrongcat->makeSound();
	delete wrongcat;
}