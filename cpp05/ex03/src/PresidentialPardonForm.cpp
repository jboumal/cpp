/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jboumal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 12:55:14 by jboumal           #+#    #+#             */
/*   Updated: 2022/07/11 12:55:17 by jboumal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm ( void )
{
}
PresidentialPardonForm::PresidentialPardonForm ( std::string target ) : Form(target + " presidential pardon", 25, 5, target)
{
}
PresidentialPardonForm::~PresidentialPardonForm ( void )
{
}
PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm & src)
{
	*this = src;
}
PresidentialPardonForm & PresidentialPardonForm::operator=(PresidentialPardonForm const & rhs)
{
	(void) rhs;
	return *this;
}
void	PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	Form::execute(executor);
	std::cout << getTarget() << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}