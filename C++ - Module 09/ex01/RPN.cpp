/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebensalt <ebensalt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 20:44:30 by ebensalt          #+#    #+#             */
/*   Updated: 2023/05/21 20:05:55 by ebensalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN(void)
{
	std::cout << "Default constructor called" << std::endl;
}

RPN::RPN(const RPN &o)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = o;
}

RPN::~RPN(void)
{
	std::cout << "Destructor called" << std::endl;
}

RPN	&RPN::operator=(const RPN &o)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &o)
		s = o.s;
	return (*this);
}

bool	RPN::input_check(char *av)
{
	t = av;

	if (t.find_first_not_of(" \t+-/*0123456789") != std::string::npos)
	{
		std::cerr << "Error : bad input!" << std::endl;
		return (false);
	}
	return (true);
}

void	RPN::execute(void)
{
	double	a;
	double	b;
	double	r;
	for (int i = 0; t[i]; i++)
	{
		if (!std::isspace(t[i]))
		{
			if (std::isdigit(t[i]))
				s.push((t[i] - 48));
			else if (s.size() > 1)
			{
				a = s.top();
				s.pop();
				b = s.top();
				s.pop();
				if (t[i] == '+')
					r = b + a;
				else if (t[i] == '-')
					r = b - a;
				else if (t[i] == '*')
					r = b * a;
				else if (t[i] == '/')
					r = b / a;
				s.push(r);
			}
			else
			{
				std::cerr << "Error : bad input!" << std::endl;
				return ;
			}
		}
	}
	if (s.size() != 1)
	{
		std::cerr << "Error : bad input!" << std::endl;
		return ;
	}
	std::cout << s.top() << std::endl;
}
