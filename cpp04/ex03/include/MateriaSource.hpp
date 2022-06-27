/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jboumal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 14:41:43 by jboumal           #+#    #+#             */
/*   Updated: 2022/06/24 14:41:44 by jboumal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP
# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{

public:
	MateriaSource( void );
	~MateriaSource();
	MateriaSource (MateriaSource & src);
	MateriaSource &	operator=( MateriaSource const & rhs );

	void learnMateria(AMateria* m);
	AMateria* createMateria(std::string const & type);

private:
	AMateria* source[4];
};

#endif
