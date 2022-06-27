/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jboumal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 14:40:59 by jboumal           #+#    #+#             */
/*   Updated: 2022/06/24 14:41:00 by jboumal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP
# include <iostream>
# include <string>
# include "AMateria.hpp"
# include "ICharacter.hpp"

class Ice : public AMateria
{

public:
	Ice (void);
	virtual ~Ice();
	Ice (Ice & src);
	Ice (std::string const & type);
	
	Ice &	operator=( Ice const & rhs );
	Ice* clone() const;
	void use(ICharacter& target);
};

#endif


