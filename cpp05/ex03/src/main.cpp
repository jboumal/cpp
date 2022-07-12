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
#include "Intern.hpp"

int main (void)
{

	Bureaucrat charles ( "charles", 1);

	Intern	intern;
	Form	*form;
	form = intern.makeForm("promotion", "Louis");
	form = intern.makeForm("presidential pardon", "Louis");
	charles.signForm(*form);
	charles.executeForm(*form);
}