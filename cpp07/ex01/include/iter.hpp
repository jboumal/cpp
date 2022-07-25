/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jboumal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 19:45:21 by jboumal           #+#    #+#             */
/*   Updated: 2022/07/21 19:45:22 by jboumal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

template< typename T >
void	iter( T *array, int len, void (*fct)(T &))
{
	if (!array)
		return ;
	for (int i = 0; i < len; i++)
	{
		if (fct)
			fct(array[i]);
	}
}

#endif
