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
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main (void)
{

	Bureaucrat albert ( "albert", 150);
	Bureaucrat charles ( "charles", 1);

	std::cout << charles << std::endl;
	std::cout << albert << std::endl;

	PresidentialPardonForm	pform("Unicorn");

	charles.executeForm(pform);
	charles.signForm(pform);
	albert.executeForm(pform);
	charles.executeForm(pform);

	RobotomyRequestForm rform("Human");
	charles.signForm(rform);
	for (int i = 0; i < 4; i++)
	{
		charles.executeForm(rform);
	}
	ShrubberyCreationForm sform("tree");
	charles.signForm(sform);
	charles.executeForm(sform);

	PresidentialPardonForm	fred("Fred");
	fred = pform;
	charles.executeForm(pform);
}