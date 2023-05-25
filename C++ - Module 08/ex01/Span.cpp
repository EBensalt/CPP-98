/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebensalt <ebensalt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 18:19:03 by ebensalt          #+#    #+#             */
/*   Updated: 2023/05/17 14:38:02 by ebensalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(void) : N(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Span::Span(const Span &o)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = o;
}

Span::~Span(void)
{
	std::cout << "Destructor called" << std::endl;
}

Span::Span(unsigned int n) : N(n) {}

Span	&Span::operator=(const Span &o)
{
	std::cout << "Copy assignment operator called" << std::endl;
	v = o.v;
	N = o.N;
	return (*this);
}

void	Span::addNumber(int n)
{
	if (v.size() < N)
		v.push_back(n);
	else
		throw("The class is full!");
}

int	Span::shortestSpan(void)
{
	if (N != 0 && N != 1)
	{
		std::vector<int>	v2(v);
		int					ss = INT_MAX;
	
		std::sort(v2.begin(), v2.end());
		for (unsigned int i = 0; i < (N - 1); i++)
		{
			if ((v2[i + 1] - v2[i]) < ss)
				ss = v2[i + 1] - v2[i];
		}
		return (ss);
	}
	else
		throw("There is no enough numbers!");
}

int	Span::longestSpan(void)
{
	if (N != 0 && N != 1)
	{
		std::vector<int>	v2(v);

		std::sort(v2.begin(), v2.end());
		return (v2[N - 1] - v2[0]);
	}
	else
		throw("There is no enough numbers!");
}

void	Span::addNNumber(int n)
{
	v.resize(N);
	for (std::vector<int>::iterator it = v.begin(); it != v.end(); it++)
		*it = n;
}

void	Span::print(void) const
{
	for (unsigned int i = 0; i < v.size(); i++)
		std::cout << v[i] << " ";
	std::cout << std::endl;
}
