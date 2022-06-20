/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jboumal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 16:04:53 by jboumal           #+#    #+#             */
/*   Updated: 2022/06/20 16:04:54 by jboumal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP
# include <string>
# include <iostream>


class Weapon {

public:
	Weapon();
	Weapon( std::string type );
	~Weapon();

	void		setType( std::string type );
	std::string	getType( void ) const;

private:
	std::string _type;

};

#endif

