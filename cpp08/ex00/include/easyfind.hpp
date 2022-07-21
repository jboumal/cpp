/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jboumal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 21:24:46 by jboumal           #+#    #+#             */
/*   Updated: 2022/07/21 21:24:47 by jboumal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP
# include <algorithm>
# include <iterator>
#include <iostream>

template < typename T >
typename T::iterator	easyfind( T & t, int i )
{
	return(std::find(t.begin(), t.end(), i));
}

#endif
