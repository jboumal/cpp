/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jboumal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 14:52:33 by jboumal           #+#    #+#             */
/*   Updated: 2022/06/19 14:52:35 by jboumal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "PhoneBook.hpp"
#include "Contact.hpp"

int main(void)
{
	string    line;
	PhoneBook phonebook;

	std::cout << "Welcome into the amazing PhoneBook" << std::endl;
	while (1)
	{
		std::cout << "You are in PhoneBook. Input action ADD, SEARCH or EXIT" << std::endl;
		std::cout << "Input next action: ";
		std::getline(std::cin, line);
		if (line.compare("ADD") == 0 || line.compare("add") == 0)
		{
			phonebook.add_contact();
		}
		else if (line.compare("SEARCH") == 0 || line.compare("search") == 0)
		{
			phonebook.search_contact();
		}
		else if (line.compare("EXIT") == 0 || line.compare("exit") == 0)
		{
			return (0);
		}
	}
}