/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jboumal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 12:54:34 by jboumal           #+#    #+#             */
/*   Updated: 2022/07/11 12:54:35 by jboumal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm ( void )
{
}
ShrubberyCreationForm::ShrubberyCreationForm ( std::string target ) : Form(target + " shruberry creation", 145, 137, target)
{
}
ShrubberyCreationForm::~ShrubberyCreationForm ( void )
{
}
ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm & src)
{
	*this = src;
}
ShrubberyCreationForm & ShrubberyCreationForm::operator=(ShrubberyCreationForm const & rhs)
{
	(void) rhs;
	return *this;
}
void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	Form::execute(executor);
	std::ofstream ofs(getTarget() + "_shruberry");
	ofs << "       _-_" << std::endl;
    ofs << "    /~~   ~~\\" << std::endl;
	ofs << " /~~         ~~\\" << std::endl;
	ofs << "{               }" << std::endl;
	ofs << " \\  _-     -_  /" << std::endl;
	ofs << "   ~  \\\\ //  ~" << std::endl;
	ofs << "_- -   | | _- _" << std::endl;
	ofs << "  _ -  | |   -_" << std::endl;
	ofs << "      // \\\\" << std::endl;
}
