/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jboumal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 14:48:32 by jboumal           #+#    #+#             */
/*   Updated: 2022/06/19 14:48:34 by jboumal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include "Contact.hpp"

class PhoneBook {

public:
	PhoneBook();
	~PhoneBook(void);

	void	add_contact(void);
	void	get_contact(int id) const;

private:
	Contact	contacts[8];
	int		contact_count;
};

#endif