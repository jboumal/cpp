/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jboumal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 16:41:59 by jboumal           #+#    #+#             */
/*   Updated: 2022/06/23 16:42:00 by jboumal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP
# include "Animal.hpp"

class Dog : public Animal
{

public:
	Dog();
	~Dog();
	Dog(Dog & src);
	Dog &	operator=( Dog const & rhs );

	void	makeSound( void );

};

#endif

