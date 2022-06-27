/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jboumal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 12:51:49 by jboumal           #+#    #+#             */
/*   Updated: 2022/06/27 12:51:51 by jboumal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main (void)
{
	try
	{
		Bureaucrat b0 ("b0", 0);	
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Bureaucrat b200 ("b200", 200);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	Bureaucrat albert ( "albert", 150);
	Bureaucrat charles ( "charles", 1);
	try
	{
		charles.promote();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		albert.demote();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	albert.promote();
	charles.demote();
	std::cout << charles << std::endl;
	std::cout << albert << std::endl;


}