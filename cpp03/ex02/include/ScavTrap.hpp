/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jboumal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 17:49:56 by jboumal           #+#    #+#             */
/*   Updated: 2022/06/22 17:49:57 by jboumal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{

public:
	ScavTrap( void );
	ScavTrap( std::string name );
	ScavTrap( ScavTrap & src);
	~ScavTrap( void );
	ScavTrap &	operator=( ScavTrap const & rhs );
	void guardGate( void );
	void attack(const std::string& target);

private:

};

#endif