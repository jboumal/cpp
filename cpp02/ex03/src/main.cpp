/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jboumal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 12:39:46 by jboumal           #+#    #+#             */
/*   Updated: 2022/06/21 12:39:48 by jboumal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

#include <iostream>

bool bsp( Point const a, Point const b, Point const c, Point const point);

int main( void ) {

	/* points in the triangle */
	Point point(0.25, 0.25);
	//Point point(0.9, 0.05);
	//Point point(0.1, 0.1);
	//Point point(0.05, 0.9);
	//Point point(0.45, 0.45);
	/* points out of the triangle */
	//Point point(1, 0);
	//Point point(0, 1);
	//Point point;
	//Point point(0.5, 0.5);
	//Point point(0, 0.3);
	//Point point(0.3, 0);


	Point a(1, 0);
	Point b(0, 0);
	Point c(0, 1);

	std::cout << "Point (" << point.getx() << ", " << point.gety() << ") ";
	if (bsp(a, b, c, point))
		std::cout << "is in the triangle" << std::endl;
	else
		std::cout << "is not in the triangle" << std::endl;

	return 0;
}