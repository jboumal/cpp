/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jboumal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 21:24:33 by jboumal           #+#    #+#             */
/*   Updated: 2022/07/21 21:24:34 by jboumal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <iostream>
#include <vector>

int	main( void )
{
	const std::vector<int> lst(3, 8);

	if (easyfind(lst, 8) != lst.end())
		std::cout << "element found !" << std::endl;
	else
		std::cout << "element not found !" << std::endl;

	if (easyfind(lst, 9) != lst.end())
		std::cout << "element found !" << std::endl;
	else
		std::cout << "element not found !" << std::endl;

	return 0;
}