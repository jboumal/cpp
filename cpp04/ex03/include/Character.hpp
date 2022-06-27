/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jboumal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 14:39:58 by jboumal           #+#    #+#             */
/*   Updated: 2022/06/24 14:39:59 by jboumal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP
# include "ICharacter.hpp"
# include "AMateria.hpp"
# include <iostream>
# include <string>

class Character : public ICharacter
{

public:
	Character( void );
	Character( std::string name );
	~Character( void );
	Character (Character & src);
	Character &	operator=( Character const & rhs );

	std::string const & getName() const;
	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);

private:
	std::string	_name;
	AMateria	*_inventory[4];

};

#endif