/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebensalt <ebensalt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 15:44:31 by ebensalt          #+#    #+#             */
/*   Updated: 2023/04/27 15:08:29 by ebensalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm(void) : signe(false), s_grade(150), e_grade(150)
{
	std::cout << "AForm default constructor called" << std::endl;
}

AForm::AForm(const AForm &o) : name(o.name), s_grade(o.s_grade), e_grade(o.e_grade)
{
	std::cout << "AForm copy constructor called" << std::endl;
	*this = o;
}

AForm::~AForm(void)
{
	std::cout << "AForm destructor called" << std::endl;
}

AForm::AForm(const std::string n, const int sg, const int eg) : name(n), signe(false), s_grade(sg), e_grade(eg)
{
	if (s_grade > 150 || e_grade > 150)
		throw(GradeTooLowException());
	else if (s_grade < 1 || e_grade < 1)
		throw(GradeTooHighException());
}

AForm	&AForm::operator=(const AForm &o)
{
	std::cout << "AForm copy assignment operator called" << std::endl;
	signe = o.signe;
	return (*this);
}

const std::string	&AForm::getName(void) const
{
	return (name);
}

bool	AForm::getSigne(void) const
{
	return (signe);
}

int	AForm::getS_grade(void) const
{
	return (s_grade);
}

int	AForm::getE_grade(void) const
{
	return (e_grade);
}

void	AForm::beSigned(Bureaucrat &o)
{
	if (o.getGrade() <= s_grade)
		signe = true;
	else
		throw(GradeTooLowException());
}

void	AForm::setSigne(bool s)
{
	signe = s;
}

const char	*AForm::GradeTooHighException::what(void) const throw()
{
	return ("AForm grade is too high!");
}

const char	*AForm::GradeTooLowException::what(void) const throw()
{
	return ("AForm grade is too low!");
}

const char	*AForm::FormIsNotSigned::what(void) const throw()
{
	return ("Form is not signed!");
}

std::ostream	&operator<<(std::ostream &o, const AForm &f)
{
	o << "AForm name : " << f.getName() << std::endl;
	if (f.getSigne())
		o << "AForm signe : signed" << std::endl;
	else
		o << "AForm signe : not signed" << std::endl;
	o << "AForm grade (sign) : " << f.getS_grade() << std::endl;
	o << "AForm grade (execute) : " << f.getE_grade();
	return (o);
}
