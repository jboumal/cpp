/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jboumal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 14:52:17 by jboumal           #+#    #+#             */
/*   Updated: 2022/06/19 14:52:19 by jboumal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iostream>

Contact::Contact(void)
{
	std::cout << "Contact constructor called" << std::endl;
}

Contact::~Contact(void)
{
	std::cout << "Contact destructor called" << std::endl;
}

void Contact::create_contact(string s1, string s2, string s3, string s4, string s5)
{
	this->first_name = s1;
	this->last_name = s2;
	this->nickname = s3;
	this->phone_number = s4;
	this->darkest_secret = s5;
}
