/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jboumal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 14:52:17 by jboumal           #+#    #+#             */
/*   Updated: 2022/06/19 14:52:19 by jboumal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iostream>

Contact::Contact(void)
{
	//std::cout << "Contact constructor called" << std::endl;
	this->set = 0;
}

Contact::~Contact(void)
{
	//std::cout << "Contact destructor called" << std::endl;
}

void Contact::add_contact(void)
{
	std::cout << "First name: ";
	std::getline (std::cin, this->first_name);
	std::cout << "Last name: ";
	std::getline (std::cin, this->last_name);
	std::cout << "Nickname: ";
	std::getline (std::cin, this->nickname);
	std::cout << "Phone number: ";
	std::getline (std::cin, this->phone_number);
	std::cout << "Darkest secret: ";
	std::getline (std::cin, this->darkest_secret);	
	this->set = 1;
}

void	Contact::print_overview(void) const
{
	std::cout << " | ";
	this->print_ten(this->first_name);
	std::cout << " | ";
	this->print_ten(this->last_name);
	std::cout << " | ";
	this->print_ten(this->nickname);
	std::cout << std::endl;
}

void	Contact::print_info(void) const
{
	std::cout << "First name: " << this->first_name << std::endl;
	std::cout << "Last name: " << this->last_name << std::endl;
	std::cout << "Nickname: " << this->nickname << std::endl;
	std::cout << "Phone number: " << this->phone_number << std::endl;
	std::cout << "Darkest secret: " << this->darkest_secret << std::endl;
}

bool	Contact::is_set(void) const
{
	return (this->set);
}

void	Contact::print_ten(string str) const
{
	int	len;

	len = str.length();
	if (len <= 10)
	{
		for (int i = 0; i < 10 - len; i++)
		{
			std::cout << " ";
		}
		std::cout << str;
	}
	else
	{
		for (int i = 0; i < 9; i++)
		{
			std::cout << str[i];
		}
		std::cout << ".";
	}
}