/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   identify.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jboumal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 16:11:00 by jboumal           #+#    #+#             */
/*   Updated: 2022/07/21 16:11:01 by jboumal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "identifier.hpp"

void	identify(Base* p)
{
	if (dynamic_cast<A *>(p))
		std::cout << "A" << std::endl;
	if (dynamic_cast<B *>(p))
		std::cout << "B" << std::endl;
	if (dynamic_cast<C *>(p))
		std::cout << "C" << std::endl;
}
void	identify(Base& p)
{
	try{
		p = dynamic_cast<A &>(p);
		std::cout << "A" << std::endl;
	} 
	catch(const std::exception& e) {}
	try{
		p = dynamic_cast<B &>(p);
		std::cout << "B" << std::endl;
	} 
	catch(const std::exception& e) {}	try{
		p = dynamic_cast<C &>(p);
		std::cout << "C" << std::endl;
	} 
	catch(const std::exception& e) {}
}