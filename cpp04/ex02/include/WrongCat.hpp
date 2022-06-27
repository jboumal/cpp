/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jboumal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 16:41:55 by jboumal           #+#    #+#             */
/*   Updated: 2022/06/23 16:41:56 by jboumal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP
# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{

public:
	WrongCat();
	~WrongCat();
	WrongCat(WrongCat & src);
	WrongCat &	operator=( WrongCat const & rhs );

	void	makeSound( void );

};

#endif
