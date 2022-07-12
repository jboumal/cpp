/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jboumal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 12:55:51 by jboumal           #+#    #+#             */
/*   Updated: 2022/07/11 12:55:52 by jboumal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIAL_PARDON_FORM_HPP
# define PRESIDENTIAL_PARDON_FORM_HPP
# include "Form.hpp"

class PresidentialPardonForm : public Form
{

public:
	PresidentialPardonForm ( std::string target );
	~PresidentialPardonForm( void );
	PresidentialPardonForm(PresidentialPardonForm & src);
	PresidentialPardonForm & operator=(PresidentialPardonForm const & rhs);

	void	execute(Bureaucrat const & executor) const;

private:
	PresidentialPardonForm ( void );
};

#endif
