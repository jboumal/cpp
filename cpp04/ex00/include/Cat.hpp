/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jboumal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 16:41:55 by jboumal           #+#    #+#             */
/*   Updated: 2022/06/23 16:41:56 by jboumal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP
# include "Animal.hpp"

class Cat : public Animal
{

public:
	Cat();
	~Cat();
	Cat(Cat & src);
	Cat &	operator=( Cat const & rhs );

	void	makeSound( void );

};

#endif
