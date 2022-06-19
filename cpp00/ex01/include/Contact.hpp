/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jboumal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 14:48:27 by jboumal           #+#    #+#             */
/*   Updated: 2022/06/19 14:48:28 by jboumal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP
# include <string>
using namespace std;

class Contact {

public:
	Contact(void);
	~Contact(void);

	void create_contact(string s1, string s2, string s3, string s4, string s5);

private:
	string	first_name;
	string	last_name;
	string	nickname;
	string	phone_number;
	string	darkest_secret;
};

#endif