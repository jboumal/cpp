/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jboumal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 17:26:31 by jboumal           #+#    #+#             */
/*   Updated: 2022/06/22 11:46:27 by jboumal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

int	main (int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Program takes 3 parameters" << std::endl;
		return (1);
	}
	else
	{
		size_t		index;
		std::string file_name(argv[1]);
		std::string	s1(argv[2]);
		std::string	s2(argv[3]);
		std::ifstream	ifs(file_name);
		std::stringstream	buffer;
		buffer << ifs.rdbuf();
		std::string	str = buffer.str();

		while ((index = str.find(s1)) != std::string::npos)
		{
			str.erase(index, s1.length());
			str.insert(index, s2);
		}
		std::ofstream	ofs(file_name + ".replace");
		ofs << str;
		return (0);
	}
}
