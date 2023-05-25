/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex02.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebensalt <ebensalt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 15:34:42 by ebensalt          #+#    #+#             */
/*   Updated: 2023/05/06 16:21:44 by ebensalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ex02.hpp"

Base	*generate(void)
{
	std::srand(std::time(0));

	static int	i = rand();
	Base		*d;

	if (i % 2 == 0)
		d = new A;
	else if (i % 3 == 0)
		d = new B;
	else
		d = new C;
	i++;
	return (d);
}

void	identify(Base *p)
{
	if (dynamic_cast<A *>(p))
		std::cout << "pointer : A" << std::endl;
	else if (dynamic_cast<B *>(p))
		std::cout << "pointer : B" << std::endl;
	else if (dynamic_cast<C *>(p))
		std::cout << "pointer : C" << std::endl;
	else
		std::cout << "Not a drived" << std::endl;
}

void	identify(Base &p)
{
	try
	{
		(void)dynamic_cast<A &>(p);
		std::cout << "reference : A" << std::endl;
	}
	catch(std::bad_cast &e)
	{
		try
		{
			(void)dynamic_cast<B &>(p);
			std::cout << "reference : B" << std::endl;
		}
		catch(std::bad_cast &e)
		{
			try
			{
				(void)dynamic_cast<C &>(p);
				std::cout << "reference : C" << std::endl;
			}
			catch(std::bad_cast &e)
			{
				std::cout << "Not a drived" << std::endl;
			}
		}
	}
}
