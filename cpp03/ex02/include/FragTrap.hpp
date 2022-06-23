/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jboumal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 13:41:27 by jboumal           #+#    #+#             */
/*   Updated: 2022/06/23 13:41:28 by jboumal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{

public:
	FragTrap( void );
	FragTrap( std::string name );
	FragTrap( FragTrap & src);
	~FragTrap( void );
	FragTrap &	operator=( FragTrap const & rhs );

	void	highFivesGuys(void);

private:

};

#endif