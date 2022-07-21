/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   templates.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jboumal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 19:17:37 by jboumal           #+#    #+#             */
/*   Updated: 2022/07/21 19:17:39 by jboumal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEMPLATES_HPP
# define TEMPLATES_HPP
#include <iostream>

template< typename T >
void	swap ( T & x, T & y)
{
	T	tmp = x;
	x = y;
	y = tmp;
}

template< typename T >
T	min ( T const & x, T const & y)
{
	return ( (x < y) ? x : y );
}

template< typename T >
T	max ( T const & x, T const & y)
{
	return ( (x > y) ? x : y );
}

#endif
