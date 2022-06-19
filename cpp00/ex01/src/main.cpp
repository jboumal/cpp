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
#include "PhoneBook.hpp"
#include "Contact.hpp"

void add()
{
	
}

void search()
{
	
}

int main(void)
{
	char    buff[512];
	while (1)
	{
		std::cout << "You are in PhoneBook. Input action ADD, SEARCH or EXIT" << std::endl;
		std::cout << "Input next action: ";
		std::cin >> buff;
		if (strcmp(buff, "ADD") == 0 || strcmp(buff, "add") == 0)
		{
			add();
		}
		else if (strcmp(buff, "SEARCH") == 0 || strcmp(buff, "search") == 0)
		{
			search();
		}
		else if (strcmp(buff, "EXIT") == 0 || strcmp(buff, "exit") == 0)
		{
			return (0);
		}
	}
}