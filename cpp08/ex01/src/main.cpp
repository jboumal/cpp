/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jboumal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 10:20:05 by jboumal           #+#    #+#             */
/*   Updated: 2022/07/22 10:20:06 by jboumal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <vector>

int	main( void )
{
	Span	sp(10);
	int	array[3] =  {10, 0, -10};
	std::vector<int> numbers;
	for (int i = 0; i < 3; i++)
	{
		numbers.push_back(array[i]);
	}

	sp.addNumbers(numbers.begin(), numbers.end());
	std::cout << sp << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	std::cout << sp.shortestSpan() << std::endl;

	return 0;
}
