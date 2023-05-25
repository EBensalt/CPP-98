/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebensalt <ebensalt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 18:19:23 by ebensalt          #+#    #+#             */
/*   Updated: 2023/05/17 14:38:44 by ebensalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int	main(void)
{
	Span	a(9);
	Span	b;
	Span	c(1);
	Span	d(100000);

	a.addNumber(35);
	a.addNumber(-98);
	a.addNumber(-97);
	a.addNumber(37);
	a.addNumber(46);
	a.addNumber(-48);
	a.addNumber(83);
	a.addNumber(56);
	a.addNumber(90);
	std::cout << a.shortestSpan() << std::endl;
	std::cout << a.longestSpan() << std::endl;
	try
	{
		b.addNumber(42);
	}
	catch (const char *s)
	{
		std::cout << s << std::endl;
	}
	try
	{
		c.addNumber(42);
		std::cout << c.shortestSpan() << std::endl;
	}
	catch (const char *s)
	{
		std::cout << s << std::endl;
	}
	d.addNNumber(10);
}
