/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebensalt <ebensalt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 16:37:10 by ebensalt          #+#    #+#             */
/*   Updated: 2023/04/29 16:17:10 by ebensalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) : AForm("Robotomy Request", 72, 45)
{
	std::cout << "RobotomyRequestForm default constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &o) : AForm(o)
{
	std::cout << "RobotomyRequestForm copy constructor called" << std::endl;
	*this = o;
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
	std::cout << "RobotomyRequestForm destructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string &t) : AForm("Robotomy Request", 72, 45), target(t) {}

RobotomyRequestForm	&RobotomyRequestForm::operator=(const RobotomyRequestForm &o)
{
	std::cout << "RobotomyRequestForm copy assignment operator called" << std::endl;
	AForm::operator=(o);
	target = o.target;
	return (*this);
}

std::string	RobotomyRequestForm::getTarget(void) const
{
	return (target);
}

void	RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	std::srand(std::time(0));
	static int	i = rand();

	if (getSigne())
	{
		if (executor.getGrade() <= getE_grade())
		{
			std::cout << "vooooooooooooo..." << std::endl;
			if (i % 2 == 0)
				std::cout << target << "has been robotomized successfully!" << std::endl;
			else
				std::cout << "the robotomy of " << target << " failed!" << std::endl;
			i++;
		}
		else
			throw(GradeTooLowException());
	}
	else
		throw(FormIsNotSigned());
}