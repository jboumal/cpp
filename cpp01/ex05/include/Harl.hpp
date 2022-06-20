/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jboumal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 18:46:42 by jboumal           #+#    #+#             */
/*   Updated: 2022/06/20 18:46:45 by jboumal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP
# include <string>
# include <iostream>

class Harl
{

public:
	void complain( std::string level );
	Harl();
	~Harl();

private:
	void debug( void );
	void info( void );
	void warning( void );
	void error( void );

};

#endif