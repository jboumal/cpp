/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jboumal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 15:15:27 by jboumal           #+#    #+#             */
/*   Updated: 2022/07/21 15:15:28 by jboumal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
# define DATA_HPP

class Data{

public:
	Data( void );
	Data( int n );
	~Data( void );
	Data(Data & src);
	Data & operator=(Data const & rhs);

	int	getNumber( void ) const;

private:
	int	_number;

};

#endif
