/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jboumal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 14:33:26 by jboumal           #+#    #+#             */
/*   Updated: 2022/06/22 11:44:50 by jboumal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <string>
# include <iostream>

int	main( void )
{
	std::string str = "HI THIS IS BRAIN";
	std::string	*stringPTR = &str;
	std::string	&stringREF = str;

	std::cout << "Address of the string variable is: " << &str << std::endl;
	std::cout << "Address held by stringPTR is: " << stringPTR << std::endl;
	std::cout << "Address held by stringREF is: " << &stringREF << std::endl;

	std::cout << "Value of the string variable is: " << str << std::endl;
	std::cout << "Value pointed to by stringPTR is: " << *stringPTR << std::endl;
	std::cout << "Value pointed to by stringREF is: " << stringREF << std::endl;
}
