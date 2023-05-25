/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebensalt <ebensalt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 15:44:31 by ebensalt          #+#    #+#             */
/*   Updated: 2023/04/27 15:08:29 by ebensalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(void) : signe(false), s_grade(150), e_grade(150)
{
	std::cout << "Form default constructor called" << std::endl;
}

Form::Form(const Form &o) : name(o.name), s_grade(o.s_grade), e_grade(o.e_grade)
{
	std::cout << "Form copy constructor called" << std::endl;
	*this = o;
}

Form::~Form(void)
{
	std::cout << "Form destructor called" << std::endl;
}

Form::Form(const std::string n, const int sg, const int eg) : name(n), signe(false), s_grade(sg), e_grade(eg)
{
	if (s_grade > 150 || e_grade > 150)
		throw(GradeTooLowException());
	else if (s_grade < 1 || e_grade < 1)
		throw(GradeTooHighException());
}

Form	&Form::operator=(const Form &o)
{
	std::cout << "Form copy assignment operator called" << std::endl;
	signe = o.signe;
	return (*this);
}

const std::string	&Form::getName(void) const
{
	return (name);
}

bool	Form::getSigne(void) const
{
	return (signe);
}

int	Form::getS_grade(void) const
{
	return (s_grade);
}

int	Form::getE_grade(void) const
{
	return (e_grade);
}

void	Form::beSigned(Bureaucrat &o)
{
	if (o.getGrade() <= s_grade)
		signe = true;
	else
		throw(GradeTooLowException());
}

const char	*Form::GradeTooHighException::what(void) const throw()
{
	return ("Form grade is too high!");
}

const char	*Form::GradeTooLowException::what(void) const throw()
{
	return ("Form grade is too low!");
}

std::ostream	&operator<<(std::ostream &o, const Form &f)
{
	o << "Form name : " << f.getName() << std::endl;
	if (f.getSigne())
		o << "Form signe : signed" << std::endl;
	else
		o << "Form signe : not signed" << std::endl;
	o << "Form grade (sign) : " << f.getS_grade() << std::endl;
	o << "Form grade (execute) : " << f.getE_grade();
	return (o);
}
