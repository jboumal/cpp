/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jboumal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 16:21:45 by jboumal           #+#    #+#             */
/*   Updated: 2022/06/20 16:21:47 by jboumal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP
# include <string>
# include <iostream>
# include "Weapon.hpp"

class HumanA {

public:
	HumanA(std::string name, Weapon &weapon);
	~HumanA();

	void	attack( void );

private:
	std::string _name;
	Weapon &weapon;
};

#endif

