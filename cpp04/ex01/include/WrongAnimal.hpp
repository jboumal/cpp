/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jboumal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 16:42:05 by jboumal           #+#    #+#             */
/*   Updated: 2022/06/23 16:42:06 by jboumal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP
# include <string>
# include <iostream>

class WrongAnimal
{

public:
	WrongAnimal();
	~WrongAnimal();
	WrongAnimal(WrongAnimal & src);
	WrongAnimal &	operator=( WrongAnimal const & rhs );

	void	makeSound( void );

protected:
	std::string type;

};

#endif
