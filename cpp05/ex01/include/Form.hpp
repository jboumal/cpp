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
	Form ( std::string name, int sign_grade, int execute_grade);
	~Form( void );
	Form(Form & src);
	Form & operator=(Form const & rhs);

	const std::string	getName() const;
	bool				isSigned() const;
	int					getSignGrade() const;
	int					getExecuteGrade() const;

	void	beSigned(Bureaucrat & bureaucrat);

private:
	const std::string	_name;
	bool				_signed;
	const int			_sign_grade;
	int					_execute_grade;

};

std::ostream &	operator<<( std::ostream & o, Form const & f );

#endif
