/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jboumal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 18:43:14 by jboumal           #+#    #+#             */
/*   Updated: 2022/06/20 18:43:16 by jboumal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main( int argc, char **argv )
{
	Harl harl;

	if (argc != 2)
	{
		std::cout << "Harl Filter needs filter level as argument" << std::endl;
		return(1);
	}
	else
	{
		std::string	filter(argv[1]);
		std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
		for (int i = 0; i < 4; i++)
		{
			if (filter.compare(level[i]))
				break ;
		}
		switch (i)
		{
			case 0:
			{
				harl.complain("DEBUG");
				harl.complain("INFO");
				harl.complain("WARNING");
				harl.complain("ERROR");
				break;
			}
			case 1:
			{
				harl.complain("INFO");
				harl.complain("WARNING");
				harl.complain("ERROR");
			}
			case 2:
			{
				harl.complain("INFO");
				harl.complain("WARNING");
				harl.complain("ERROR");
			}
			case 3:
			{
				harl.complain("ERROR");
			}
			case 4:
			{
				std::cout;
			}

		}
		return(0);
	}
}