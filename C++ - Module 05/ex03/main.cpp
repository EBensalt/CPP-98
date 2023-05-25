/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebensalt <ebensalt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 10:17:46 by ebensalt          #+#    #+#             */
/*   Updated: 2023/04/29 17:13:37 by ebensalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Intern.hpp"

int	main(void)
{	
	try
	{
		Bureaucrat	b("Mehdi", 1);
		Intern		someRandomIntern;
		AForm*		rrf;

		rrf = someRandomIntern.makeForm("presidential pardon", "Bender");
		b.signForm(*rrf);
		b.executeForm(*rrf);
		rrf = someRandomIntern.makeForm("robotomy request", "Tender");
		b.signForm(*rrf);
		b.executeForm(*rrf);
		rrf = someRandomIntern.makeForm("shrubbery creation", "Lender");
		b.signForm(*rrf);
		b.executeForm(*rrf);
		delete rrf;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}
