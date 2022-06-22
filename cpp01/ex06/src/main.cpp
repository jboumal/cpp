/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jboumal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 18:43:14 by jboumal           #+#    #+#             */
/*   Updated: 2022/06/22 11:49:17 by jboumal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main( int argc, char **argv )
{
	if (argc != 2)
	{
		std::cout << "Harl Filter takes one argument" << std::endl;
		return(1);
	}
	else
	{
		Harl harl;
		std::string	filter(argv[1]);
		std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
		int	i;
		for (i = 0; i < 4; i++)
		{
			if (filter.compare(levels[i]) == 0)
				break ;
		}
		switch (i)
		{
			case 0:
				harl.complain("DEBUG");
			case 1:
				harl.complain("INFO");
			case 2:
				harl.complain("WARNING");
			case 3:
				harl.complain("ERROR");
				break;
			default:
				std::cout << "Filter not found" << std::endl;
				break;
		}
		return(0);
	}
}
