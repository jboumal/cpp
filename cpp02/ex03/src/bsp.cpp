/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jboumal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 12:23:41 by jboumal           #+#    #+#             */
/*   Updated: 2022/06/22 12:23:43 by jboumal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


# include "Fixed.hpp"
# include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	// Solution using https://en.wikipedia.org/wiki/Barycentric_coordinate_system
	// Area = 0.5 *(-p1y*p2x + p0y*(-p1x + p2x) + p0x*(p1y - p2y) + p1x*p2y);
	Fixed Area = Fixed(0.5f) * (Fixed(-1.f) * b.gety() * c.getx() + a.gety()
		* (Fixed(-1.f) * b.getx() + c.getx())
		+ a.getx() * (b.gety() - c.gety()) + b.getx() * c.gety());

	//s = 1/(2*Area)*(p0y*p2x - p0x*p2y + (p2y - p0y)*px + (p0x - p2x)*py);
	Fixed s = Fixed(1.f) / (Fixed(2) * Area) * (a.gety() * c.getx() - a.getx() * c.gety()
		+ (c.gety() - a.gety()) * point.getx() + (a.getx() - c.getx()) * point.gety());

	//t = 1/(2*Area)*(p0x*p1y - p0y*p1x + (p0y - p1y)*px + (p1x - p0x)*py);
	Fixed t = Fixed(1.f) / (Fixed(2) * Area) * (a.getx() * b.gety() - a.gety() * b.getx()
		+ (a.gety() - b.gety()) * point.getx() + (b.getx() - a.getx()) * point.gety());
	return (s > 0 && t > 0 && Fixed(1.f) - s - t > 0);
}
