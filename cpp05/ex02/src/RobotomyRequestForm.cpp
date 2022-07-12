/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jboumal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 12:55:03 by jboumal           #+#    #+#             */
/*   Updated: 2022/07/11 12:55:04 by jboumal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm ( void )
{
}
RobotomyRequestForm::RobotomyRequestForm ( std::string target ) : Form(target + " robotomy request form", 72, 45, target)
{
	srand(time(0));
}
RobotomyRequestForm::~RobotomyRequestForm ( void )
{
}
RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm & src)
{
	*this = src;
}
RobotomyRequestForm & RobotomyRequestForm::operator=(RobotomyRequestForm const & rhs)
{
	(void) rhs;
	return *this;
}
void	RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	Form::execute(executor);
	if (rand() % 2)
		std::cout << getTarget() << " has been robotomized successfully." << std::endl;
	else
		std::cout << "Robotomy failed." << std::endl;
}
