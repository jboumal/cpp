/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jboumal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 16:10:41 by jboumal           #+#    #+#             */
/*   Updated: 2022/07/21 16:10:43 by jboumal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "identifier.hpp"

int	main ( void )
{
	srand(time(0));
	Base	*b[5];
	for (int i = 0; i < 5; i++)
		b[i] = generate();

	for (int i = 0; i < 5; i++)
		identify(b[i]);
	std::cout << std::endl;

	for (int i = 0; i < 5; i++)
		identify(*b[i]);

	return 0;
}