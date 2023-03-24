/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jboumal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 15:53:04 by jboumal           #+#    #+#             */
/*   Updated: 2023/03/23 15:53:05 by jboumal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

static void displayLine(std::string line)
{
	int year, month, day;

	if (line.find("|") != 11)
	{
		std::cout << "wrong input => " << line << std::endl;
		return ;
	}
	year = std::stoi (line.substr(0, 4));
	month = std::stoi (line.substr(5, 2));
	day = std::stoi (line.substr(8, 2));
	if (year < 2009 || year > 2022 || month < 0 || month > 12 || day < 0 || day > 31)
	{
		std::cout << "wrong input => " << line << std::endl;
		return ;
	}
	if (month == 2 && (day > 29 || (year % 4 != 2 && day == 29)))
	{
		std::cout << "wrong input => " << line << std::endl;
		return ;
	}
	if (day == 31 && (month == 4 || month == 6 || month == 9 || month == 11))
	{
		std::cout << "wrong input => " << line << std::endl;
		return ;
	}
}

int	displayValues(char *file)
{
	std::string	line;
	std::ifstream ifs(file);

	if (!ifs.is_open())
	{
		std::cout << "failed to open the file" << std::endl;
		return 1;
	}
	if (std::getline(ifs, line) && line != std::string("date | value"))
	{
		std::cout << "wrong file formatting" << std::endl;
		return 1;
	}
	while (std::getline(ifs, line))
	{
		displayLine(line);
	}
	ifs.close();
	return 0;
}
