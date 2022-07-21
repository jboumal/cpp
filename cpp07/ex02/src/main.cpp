/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jboumal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 20:13:17 by jboumal           #+#    #+#             */
/*   Updated: 2022/07/21 20:13:18 by jboumal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iostream>

int	main( void )
{
	Array<int>lst;
	Array<int>lst2(10);
	std::cout << lst2[5] << std::endl;
	lst2[5] = 6;
	std::cout << lst2[5] << std::endl;
}
