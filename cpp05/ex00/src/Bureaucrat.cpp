/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jboumal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 12:51:58 by jboumal           #+#    #+#             */
/*   Updated: 2022/06/27 12:51:59 by jboumal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( void ) : _name("default"), _grade(150)
{
	std::cout << "Bureaucrat constructed" << std::endl;
}
Bureaucrat::Bureaucrat( std::string name, int grade ) : _name(name), _grade(grade)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();

	std::cout << "Bureaucrat constructed" << std::endl;
}
Bureaucrat::Bureaucrat( Bureaucrat & src) : _name(src.getName())
{
	std::cout << "Bureaucrat copy constructed" << std::endl;
	*this = src;
}
Bureaucrat::~Bureaucrat( void )
{
	std::cout << "Bureaucrat destructed" << std::endl;
}
Bureaucrat &	Bureaucrat::operator=( Bureaucrat const & rhs )
{
	std::cout << "Bureaucrat copy assignement operator called" << std::endl;

	_grade = rhs.getGrade();
	return (*this);
}

const std::string	Bureaucrat::getName( void ) const
{
	return _name;
}
int	Bureaucrat::getGrade( void ) const
{
	return _grade;
}
void	Bureaucrat::promote ( void )
{
	if (_grade <= 1)
		throw(Bureaucrat::GradeTooHighException());
	_grade --;
}
void	Bureaucrat::demote (void)
{
	if (_grade >= 150)
		throw(Bureaucrat::GradeTooLowException());
	_grade ++;
}

const char * Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade can't be higher than 1");
}

const char * Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade can't be lower than 150");
}

std::ostream &	operator<<( std::ostream & o, Bureaucrat const & b )
{
	o << b.getName() << ", bureaucrat grade " << b.getGrade() << ".";	
	return (o);
}
