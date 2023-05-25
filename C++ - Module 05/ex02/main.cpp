/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebensalt <ebensalt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 10:17:46 by ebensalt          #+#    #+#             */
/*   Updated: 2023/04/28 19:26:32 by ebensalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main(void)
{	
	try
	{
		Bureaucrat				b("Mehdi", 1);
		ShrubberyCreationForm	s("shrubbery");
		RobotomyRequestForm		r("robotomy");
		PresidentialPardonForm	p("presidential");
		
		std::cout << b << std::endl;
		std::cout << s << std::endl;
		std::cout << r << std::endl;
		std::cout << p << std::endl;
		b.signForm(s);
		b.signForm(r);
		b.signForm(p);
		std::cout << b << std::endl;
		std::cout << s << std::endl;
		std::cout << r << std::endl;
		std::cout << p << std::endl;
		b.executeForm(s);
		b.executeForm(r);
		b.executeForm(p);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}
