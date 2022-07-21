/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jboumal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 14:50:57 by jboumal           #+#    #+#             */
/*   Updated: 2022/07/20 14:50:59 by jboumal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Converter.hpp"

int	main( int argc, char **argv )
{
	if (argc == 2)
	{
		try
		{
			Converter conv( argv[1] );
			std::cout << conv << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cout << "Expression is not convertible." << std::endl;
		}
		
	}
	else
		std::cout << "Converter takes exactly 1 argument." << std::endl;
	return (0);
}
