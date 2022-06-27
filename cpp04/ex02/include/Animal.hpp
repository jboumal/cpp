/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jboumal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 16:42:05 by jboumal           #+#    #+#             */
/*   Updated: 2022/06/23 16:42:06 by jboumal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <string>
# include <iostream>
# include <Brain.hpp>
class Animal
{

public:
	virtual ~Animal();
	virtual Animal &	operator=( Animal const & rhs );

	virtual void			makeSound( void ) = 0;
	virtual std::string		getType( void ) const;
	virtual void			setType( std::string s );
	Animal();
	Animal(Animal & src);

protected:
	std::string type;

};

#endif
