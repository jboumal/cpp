/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jboumal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 14:31:23 by jboumal           #+#    #+#             */
/*   Updated: 2022/06/23 14:31:24 by jboumal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{

public:
	DiamondTrap( void );
	DiamondTrap( std::string name );
	DiamondTrap( DiamondTrap & src);
	~DiamondTrap( void );
	DiamondTrap &	operator=( DiamondTrap const & rhs );

	using ScavTrap::attack;

	void	whoAmI( void );

protected:
	using FragTrap::_hit_points;
	using ScavTrap::_energy_points;
	using FragTrap::_attack_damage;

private:
	std::string _name;
};

#endif