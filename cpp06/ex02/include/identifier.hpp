/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   identifier.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jboumal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 16:12:41 by jboumal           #+#    #+#             */
/*   Updated: 2022/07/21 16:12:41 by jboumal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IDENTIFIER_HPP
# define IDENTIFIER_HPP
# include "Base.hpp"
# include "A.hpp"
# include "B.hpp"
# include "C.hpp"
# include <cstdlib>
# include <ctime>
# include <iostream>

Base *	generate(void);
void	identify(Base* p);
void	identify(Base& p);

#endif