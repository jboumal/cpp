/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jboumal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 15:52:58 by jboumal           #+#    #+#             */
/*   Updated: 2023/03/23 15:52:59 by jboumal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int	main (int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "there should be exactly 1 argument" << std::endl;
		return 1;
	}
	displayValues(argv[1]);
	return 0;
}
