/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebensalt <ebensalt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 16:20:30 by ebensalt          #+#    #+#             */
/*   Updated: 2023/04/29 17:05:31 by ebensalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(void)
{
	std::cout << "Intern default constructor called" << std::endl;
}

Intern::Intern(const Intern &o)
{
	std::cout << "Intern copy constructor called" << std::endl;
	*this = o;
}

Intern::~Intern(void)
{
	std::cout << "Intern destructor called" << std::endl;
}

Intern	&Intern::operator=(const Intern &o)
{
	std::cout << "Intern copy assignment operator called" << std::endl;
	(void)o;
	return (*this);
}

AForm	*Intern::makeForm(const std::string &n, const std::string &t)
{
	std::string	forms[3] = {"presidential pardon", "robotomy request", "shrubbery creation"};
	AForm		*(Intern::*f[3])(const std::string &t) = {&Intern::PresidentialPardon, &Intern::RobotomyRequest, &Intern::ShrubberyCreation};

	for (int i = 0; i < 3; i++)
		if (!forms[i].compare(n))
		{
			std::cout << "Intern creates " << n << std::endl;
			return ((this->*f[i])(t));
		}
	return (0);
}

AForm	*Intern::PresidentialPardon(const std::string &t)
{
	AForm	*f = new PresidentialPardonForm(t);

	return (f);
}

AForm	*Intern::RobotomyRequest(const std::string &t)
{
	AForm	*f = new RobotomyRequestForm(t);

	return (f);
}

AForm	*Intern::ShrubberyCreation(const std::string &t)
{
	AForm	*f = new ShrubberyCreationForm(t);

	return (f);
}
