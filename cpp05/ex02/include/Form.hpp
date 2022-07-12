/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jboumal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 16:09:14 by jboumal           #+#    #+#             */
/*   Updated: 2022/06/27 16:09:16 by jboumal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP
# include <iostream>
# include <string>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{

public:
	Form ( void );
	Form ( std::string name, int sign_grade, int execute_grade, std::string target);
	virtual ~Form( void );
	Form(Form & src);
	Form & operator=(Form const & rhs);

	const std::string	getName() const;
	const std::string	getTarget() const;
	bool				isSigned() const;
	int					getSignGrade() const;
	int					getExecuteGrade() const;

	void	beSigned(Bureaucrat & bureaucrat);
	virtual void	execute(Bureaucrat const & executor) const;

	class UnsignedFormException : public std::exception
	{
	public:
		virtual const char * what() const throw();
	};

private:
	const std::string	_name;
	bool				_signed;
	const int			_sign_grade;
	int					_execute_grade;
	const std::string	_target;

};

std::ostream &	operator<<( std::ostream & o, Form const & f );

#endif
