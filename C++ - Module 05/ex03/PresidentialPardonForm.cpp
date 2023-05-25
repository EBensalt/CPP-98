/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebensalt <ebensalt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 16:38:26 by ebensalt          #+#    #+#             */
/*   Updated: 2023/04/29 17:09:03 by ebensalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) : AForm("Presidential Pardon", 25, 5)
{
	std::cout << "PresidentialPardonForm default constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &o) : AForm(o)
{
	std::cout << "PresidentialPardonForm copy constructor called" << std::endl;
	*this = o;
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
	std::cout << "PresidentialPardonForm destructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string &t) : AForm("Presidential Pardon", 25, 5), target(t) {}

PresidentialPardonForm	&PresidentialPardonForm::operator=(const PresidentialPardonForm &o)
{
	std::cout << "PresidentialPardonForm copy assignment operator called" << std::endl;
	AForm::operator=(o);
	target = o.target;
	return (*this);
}

std::string	PresidentialPardonForm::getTarget(void) const
{
	return (target);
}

void	PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	if (getSigne())
	{
		if (executor.getGrade() <= getE_grade())
			std::cout << target << " has been pardoned by Zaphod Beeblebrox!" << std::endl;
		else
			throw(GradeTooLowException());
	}
	else
		throw(FormIsNotSigned());
}