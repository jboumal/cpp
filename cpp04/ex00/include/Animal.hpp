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

class Animal
{

public:
	Animal();
	virtual ~Animal();
	Animal(Animal & src);
	Animal &	operator=( Animal const & rhs );

	virtual void	makeSound( void );

protected:
	std::string type;

};

#endif
