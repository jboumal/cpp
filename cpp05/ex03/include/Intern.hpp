/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jboumal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 17:14:40 by jboumal           #+#    #+#             */
/*   Updated: 2022/07/11 17:14:41 by jboumal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP
# include <string>
# include "PresidentialPardonForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"

class Intern
{

public:
	Intern();
	~Intern();
	Intern(Intern & src);
	Intern & operator=(Intern const & rhs);

	Form	*makeForm(std::string name, std::string target);

};

#endif
