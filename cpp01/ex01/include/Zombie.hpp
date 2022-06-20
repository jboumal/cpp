/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jboumal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 14:33:09 by jboumal           #+#    #+#             */
/*   Updated: 2022/06/20 14:33:10 by jboumal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <string>
# include <iostream>


class Zombie {

public:
	Zombie( std::string name );
	Zombie();
	~Zombie( void );

	void set_name( std::string name );
	void announce( void ) const;

private:
	std::string _name;

};

#endif
