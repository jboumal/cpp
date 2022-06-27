/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jboumal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 14:40:50 by jboumal           #+#    #+#             */
/*   Updated: 2022/06/24 14:40:52 by jboumal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP
# include <iostream>
# include <string>

class ICharacter;

class AMateria
{

public:
	AMateria (void);
	virtual ~AMateria();
	AMateria (AMateria & src);
	AMateria (std::string const & type);
	
	AMateria &	operator=( AMateria const & rhs );
	std::string const & getType() const;
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);

protected:
	std::string type;
};

#endif
