/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jboumal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 19:09:01 by jboumal           #+#    #+#             */
/*   Updated: 2022/06/23 19:09:02 by jboumal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP
# include <string>
# include <iostream>

class Brain
{

public:
	Brain( void );
	~Brain( void );
	Brain(Brain & src);
	Brain &	operator=( Brain const & rhs );
	

protected:
	std::string ideas[100];

};

#endif
