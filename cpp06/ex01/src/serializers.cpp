/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serializers.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jboumal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 15:15:14 by jboumal           #+#    #+#             */
/*   Updated: 2022/07/21 15:15:15 by jboumal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "serializers.hpp"

uintptr_t serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}