/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   generate.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jboumal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 16:11:06 by jboumal           #+#    #+#             */
/*   Updated: 2022/07/21 16:11:07 by jboumal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "identifier.hpp"

Base *	generate(void)
{
	Base	*b;
	int		n = rand() % 3;

	switch (n)
	{
	case 0:
		b = new A;
		break;
	case 1:
		b = new B;
		break;
	case 2:
		b = new C;
		break;
	}

	return b;
}
