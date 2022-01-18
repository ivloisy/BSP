/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivloisy <ivloisy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 20:05:14 by ivloisy           #+#    #+#             */
/*   Updated: 2022/01/18 16:43:51 by ivloisy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

bool	bsp(Point const a, Point const b, Point const c, Point const point);

int	main(void)
{
/* 	Fixed		a(Fixed(10) / Fixed(10));
	Fixed const	b(Fixed(5.05f) * Fixed(2));
	
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
 	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << --a << std::endl;
	std::cout << a << std::endl;
 	std::cout << a-- << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << ++b << std::endl;
	std::cout << b << std::endl;
 	std::cout << b++ << std::endl;
	std::cout << b << std::endl;
	std::cout << --b << std::endl;
	std::cout << b << std::endl;
 	std::cout << b-- << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::min(a, b) << std::endl; */
	Point const	a(Fixed(2), Fixed(3));
	Point const	b(Fixed(4), Fixed(-1));
	Point const	c(Fixed(-3), Fixed(-3));

	std::cout << "a" << a << " b" << b << " c" << c << std::endl;
/* 	std::cout << a.getX() << std::endl;
	std::cout << a.getY() << std::endl;
	std::cout << a.getX() << std::endl;
	std::cout << a.getY() << std::endl;
	display_point(a); */
/* 	display_point(b);
	display_point(c); */

	Point const	p1;
	Point const	p2(Fixed(-2.5f), Fixed(2.5f));
	Point const	p3(a);

/* 	std::ostream	o;
	
	o = bsp(a, b, c, p1); */
	std::cout << bsp(a, b, c, p1)<< std::endl;
//	std::cout << "P2" << P2 << bsp(a, b, c, P2) << std::endl;
	std::cout << "a" << a << " b" << b << " c" << c << std::endl;
	
	return 0;
}
