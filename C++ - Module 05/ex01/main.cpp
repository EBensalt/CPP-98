/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebensalt <ebensalt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 10:17:46 by ebensalt          #+#    #+#             */
/*   Updated: 2023/04/27 14:38:52 by ebensalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main(void)
{	
	try
	{
		Bureaucrat	b("Mehdi", 75);
		Form		f("ebensalt", 112, 37);

		std::cout << b << std::endl;
		std::cout << f << std::endl;
		b.signForm(f);
		b.increment();
		std::cout << b << std::endl;
		std::cout << f << std::endl;
		b.decrement();
		b.decrement();
		std::cout << b << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}
