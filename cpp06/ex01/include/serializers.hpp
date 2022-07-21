/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serializers.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jboumal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 15:15:37 by jboumal           #+#    #+#             */
/*   Updated: 2022/07/21 15:15:38 by jboumal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZERS_HPP
# define SERIALIZERS_HPP

# include <cstdint>
# include <iostream>
# include "Data.hpp"

uintptr_t	serialize(Data* ptr);
Data*		deserialize(uintptr_t raw);

#endif
