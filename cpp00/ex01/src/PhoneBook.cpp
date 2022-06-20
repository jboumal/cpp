/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jboumal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 17:30:50 by jboumal           #+#    #+#             */
/*   Updated: 2022/06/19 17:30:51 by jboumal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>

PhoneBook::PhoneBook(void)
{
	//std::cout << "PhoneBook constructor called" << std::endl;
	this->id = 0;
}

PhoneBook::~PhoneBook(void)
{
	//std::cout << "PhoneBook destructor called" << std::endl;
}

void PhoneBook::add_contact(void)
{
	this->contacts[this->id].add_contact();
	this->id = (this->id + 1) % 8;
}

void PhoneBook::search_contact(void) const
{
	string	str;
	int		id;

	std::cout << "Liste des contacts enregistrés:" << std::endl;
	std::cout << "-----------------------------------------" << std::endl;
	std::cout << "id | first name |  last name |   nickname" << std::endl;
	std::cout << "-----------------------------------------" << std::endl;
	for (int i = 0; i < 8; i++)
	{
		if (this->contacts[i].is_set())
		{
			std::cout << " ";
			std::cout << i + 1;
			this->contacts[i].print_overview();
		}
	}
	std::cout << "What contact do you want to know about?" << std::endl;
	std::getline(std::cin, str);
	id = str[0];
	if (id >= '1' && id <= '8')
	{
		id = id - '0';
		if (this->contacts[id - 1].is_set())
			this->contacts[id - 1].print_info();
		else
			std::cout << "This contact does not exist" << std::endl;
	}
	else
	{
		std::cout << "Given id is not valid" << std::endl;
	}
}