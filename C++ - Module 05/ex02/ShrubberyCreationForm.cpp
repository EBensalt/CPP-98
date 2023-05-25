/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebensalt <ebensalt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 15:39:27 by ebensalt          #+#    #+#             */
/*   Updated: 2023/04/29 16:17:23 by ebensalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) : AForm("Shrubbery Creation", 145, 137)
{
	std::cout << "ShrubberyCreationForm default constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &o) : AForm(o)
{
	std::cout << "ShrubberyCreationForm copy constructor called" << std::endl;
	*this = o;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	std::cout << "ShrubberyCreationForm destructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &t) : AForm("Shrubbery Creation", 145, 137), target(t) {}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(const ShrubberyCreationForm &o)
{
	std::cout << "ShrubberyCreationForm copy assignment operator called" << std::endl;
	AForm::operator=(o);
	target = o.target;
	return (*this);
}

std::string	ShrubberyCreationForm::getTarget(void) const
{
	return (target);
}

void	ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	if (getSigne())
	{
		if (executor.getGrade() <= getE_grade())
		{
			std::ofstream	o(target + "_shrubbery");

			if (!o.is_open())
			{
				std::cerr << "can not create file " << target + "_shrubbery" << std::endl;
				return ;
			}
			o << "     *     " << std::endl;
			o << "    ***    " << std::endl;
			o << "   *****   " << std::endl;
			o << "  *******  " << std::endl;
			o << " ********* " << std::endl;
			o << "***********" << std::endl;
			o << "    |||    " << std::endl;
			o << "    |||    " << std::endl;
			o.close();
		}
		else
			throw(GradeTooLowException());
	}
	else
		throw(FormIsNotSigned());
}
