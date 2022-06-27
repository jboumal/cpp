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
#include "Form.hpp"

int main (void)
{

	Bureaucrat albert ( "albert", 150);
	Bureaucrat charles ( "charles", 1);

	std::cout << charles << std::endl;
	std::cout << albert << std::endl;

	Form form("form", 20, 20);
	std::cout << form << std::endl;
	albert.signForm(form);
	std::cout << form << std::endl;
	charles.signForm(form);
	std::cout << form << std::endl;

	try
	{
		Form form("form", 0, 20);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
		try
	{
		Form form("form", 20, 0);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}	try
	{
		Form form("form", 20, 200);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Form form("form", 200, 20);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}