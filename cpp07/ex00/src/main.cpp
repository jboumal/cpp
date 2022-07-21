/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jboumal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 19:17:09 by jboumal           #+#    #+#             */
/*   Updated: 2022/07/21 19:17:10 by jboumal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "templates.hpp"
#include <iostream>

int	main( void )
{
	int x = 19;
	int y = 42;

	std::cout << x << ", " << y << std::endl;
	swap<int>(x,y);
	std::cout << x << ", " << y << std::endl;
	std::cout << min(x, y) << std::endl;
	std::cout << max(x, y) << std::endl;
	return 0;
}