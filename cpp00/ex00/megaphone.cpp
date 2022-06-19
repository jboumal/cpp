/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jboumal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 14:26:00 by jboumal           #+#    #+#             */
/*   Updated: 2022/06/19 14:26:02 by jboumal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char **argv)
{
    int j;

    if (argc < 2)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    }
    else
    {
        for (int i = 1; i < argc; i++)
        {
            j = 0;
            while (argv[i][j])
            {
                std::cout << (char)toupper(argv[i][j]);
                j++;
            }
        }
        std::cout << std::endl;
    }
    return (0);
}
