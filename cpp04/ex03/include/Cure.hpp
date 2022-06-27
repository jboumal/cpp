/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jboumal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 14:41:05 by jboumal           #+#    #+#             */
/*   Updated: 2022/06/24 14:41:06 by jboumal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP
# include <iostream>
# include <string>
# include "AMateria.hpp"
# include "ICharacter.hpp"

class Cure : public AMateria
{

public:
	Cure (void);
	virtual ~Cure();
	Cure (Cure & src);
	Cure (std::string const & type);
	
	Cure &	operator=( Cure const & rhs );
	Cure* clone() const;
	void use(ICharacter& target);
};

#endif

