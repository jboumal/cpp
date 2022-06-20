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
typedef std::string string;

class Contact {

public:
	Contact(void);
	~Contact(void);

	void	add_contact(void);
	void	print_overview(void) const;
	void	print_info(void) const;
	bool	is_set(void) const;

private:
	bool	set;
	string	first_name;
	string	last_name;
	string	nickname;
	string	phone_number;
	string	darkest_secret;

	void	print_ten(string str) const;
};

#endif