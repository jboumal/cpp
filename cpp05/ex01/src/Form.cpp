/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jboumal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 16:09:04 by jboumal           #+#    #+#             */
/*   Updated: 2022/06/27 16:09:05 by jboumal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form ( void ) : 
	_name("default form"), _signed(false), _sign_grade(150), _execute_grade(150)
{
}
Form::Form ( std::string name, int sign_grade, int execute_grade) : 
	_name(name), _signed(false), _sign_grade(sign_grade), _execute_grade(execute_grade)
{
	if (sign_grade < 1 || execute_grade < 1)
		throw(Bureaucrat::GradeTooHighException());
	if (sign_grade > 150 || execute_grade > 150)
		throw(Bureaucrat::GradeTooLowException());	
}
Form::~Form( void )
{
}
Form::Form(Form & src) : _name(src._name), _sign_grade(src._sign_grade)
{
	*this = src;
}
Form & Form::operator=(Form const & rhs)
{
	_signed = rhs._signed;
	_execute_grade = rhs._execute_grade;
	return *this;
}

const std::string	Form::getName() const
{
	return _name;
}
bool	Form::isSigned() const
{
	return _signed;
}
int	Form::getSignGrade() const
{
	return _sign_grade;
}
int	Form::getExecuteGrade() const
{
	return _execute_grade;
}

void	Form::beSigned(Bureaucrat & bureaucrat)
{
	if (bureaucrat.getGrade() > getExecuteGrade())
	{
		throw (Bureaucrat::GradeTooLowException());
	}
	else
	{
		_signed = true;
	}
}

std::ostream &	operator<<( std::ostream & o, Form const & f )
{
	if (f.isSigned())
	{
		o << "Form " << f.getName() << " is signed. Sign grade is " << f.getSignGrade();
		o << " and execute grade is " << f.getExecuteGrade() << ".";
	}
	else
	{
		o << "Form " << f.getName() << " is unsigned. Sign grade is " << f.getSignGrade();
		o << " and execute grade is " << f.getExecuteGrade() << ".";	
	}
	return (o);
}