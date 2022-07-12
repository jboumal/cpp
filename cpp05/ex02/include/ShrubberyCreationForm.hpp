/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jboumal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 12:55:30 by jboumal           #+#    #+#             */
/*   Updated: 2022/07/11 12:55:32 by jboumal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBERRY_CREATION_FORM_HPP
# define SHRUBERRY_CREATION_FORM_HPP
# include "Form.hpp"
# include <fstream>

class ShrubberyCreationForm : public Form
{

public:
	ShrubberyCreationForm ( std::string target );
	~ShrubberyCreationForm( void );
	ShrubberyCreationForm(ShrubberyCreationForm & src);
	ShrubberyCreationForm & operator=(ShrubberyCreationForm const & rhs);

	void	execute(Bureaucrat const & executor) const;

private:
	ShrubberyCreationForm ( void );
};

#endif
