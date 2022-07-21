/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jboumal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 15:15:02 by jboumal           #+#    #+#             */
/*   Updated: 2022/07/21 15:15:03 by jboumal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "serializers.hpp"

int	main ( void )
{
	Data	d(19);
	std::cout << d.getNumber() << std::endl;

	uintptr_t ptr = serialize(&d);
	std::cout << ptr << std::endl;

	Data	*d2 = deserialize(ptr);
	std::cout << d2->getNumber() << std::endl;
}
