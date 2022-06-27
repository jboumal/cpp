/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jboumal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 12:52:13 by jboumal           #+#    #+#             */
/*   Updated: 2022/06/27 12:52:14 by jboumal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# include <string>
# include <iostream>
# include "Form.hpp"

class Form;

class Bureaucrat
{

public:
	Bureaucrat();
	Bureaucrat( std::string name, int grade );
	~Bureaucrat();
	Bureaucrat(Bureaucrat & src);
	Bureaucrat & operator=(Bureaucrat const & rhs);

	const std::string	getName( void ) const;
	int					getGrade( void ) const;
	void				promote ( void );
	void				demote (void);

	class GradeTooHighException : public std::exception
	{
	public:
		virtual const char * what() const throw();
	};
	class GradeTooLowException : public std::exception
	{
	public:
		virtual const char * what() const throw();
	};

	void	signForm(Form & form);

private:
	const std::string	_name;
	int					_grade;

};

std::ostream &	operator<<( std::ostream & o, Bureaucrat const & b );

#endif
