/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jboumal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 19:45:07 by jboumal           #+#    #+#             */
/*   Updated: 2022/07/21 19:45:09 by jboumal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>

void print_int(int &t)
{
	std::cout << t << std::endl;
}

int	main( void )
{
	int array[5] = {4, 5, 6, 7, 8};
	iter<int>(array, 5, print_int);
	return 0;
}
