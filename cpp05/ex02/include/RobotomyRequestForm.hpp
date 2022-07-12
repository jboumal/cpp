/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jboumal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 12:55:41 by jboumal           #+#    #+#             */
/*   Updated: 2022/07/11 12:55:43 by jboumal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMY_REQUEST_FORM_HPP
# define ROBOTOMY_REQUEST_FORM_HPP
# include "Form.hpp"
# include <cstdlib>
# include <ctime>

class RobotomyRequestForm : public Form
{

public:
	RobotomyRequestForm ( std::string target );
	~RobotomyRequestForm( void );
	RobotomyRequestForm(RobotomyRequestForm & src);
	RobotomyRequestForm & operator=(RobotomyRequestForm const & rhs);

	void	execute(Bureaucrat const & executor) const;

private:
	RobotomyRequestForm ( void );

};

#endif

