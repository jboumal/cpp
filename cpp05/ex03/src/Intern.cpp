/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jboumal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 17:14:29 by jboumal           #+#    #+#             */
/*   Updated: 2022/07/11 17:14:30 by jboumal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern ( void )
{
}
Intern::~Intern ( void )
{
}
Intern::Intern(Intern & src)
{
	*this = src;
}
Intern & Intern::operator=(Intern const & rhs)
{
	(void) rhs;
	return *this;
}
Form	*Intern::makeForm(std::string name, std::string target)
{
	std::string formlist[3] = {"presidential pardon", "robotomy request", "shrubbery creation"};
	int i;
	for (i = 0; i < 3; i++)
	{
		if (formlist[i].compare(name) == 0)
			break ;
	}
	Form	*form;
	switch (i)
	{
	case 0:
		form = new PresidentialPardonForm(target);
		break;
	case 1:
		form = new RobotomyRequestForm(target);
		break;
	case 2:
		form = new ShrubberyCreationForm(target);
		break;
	default:
		std::cout << name << " form not found" << std::endl;
		return NULL;
	}
	std::cout << "Intern creates " << name << " form" << std::endl;
	return form;
}
