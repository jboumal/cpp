/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jboumal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 16:21:49 by jboumal           #+#    #+#             */
/*   Updated: 2022/06/20 16:21:51 by jboumal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP
# include <string>
# include <iostream>
# include "Weapon.hpp"

class HumanB {

public:
	HumanB(std::string name);
	~HumanB();

	void	attack( void );
	void	setWeapon (Weapon &weapon);

private:
	std::string _name;
	Weapon *weapon;
};

#endif
