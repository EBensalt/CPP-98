/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebensalt <ebensalt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 17:37:16 by ebensalt          #+#    #+#             */
/*   Updated: 2023/05/05 18:09:46 by ebensalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

char	ScalarConverter::c = 0;
int		ScalarConverter::i = 0;
float	ScalarConverter::f = 0;
double	ScalarConverter::d = 0;
bool	ScalarConverter::n = true;

ScalarConverter::ScalarConverter(void)
{
	std::cout << "Default constructor called" << std::endl;
}

ScalarConverter::ScalarConverter(const ScalarConverter &o)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = o;
}

ScalarConverter::~ScalarConverter(void)
{
	std::cout << "Destructor called" << std::endl;
}

ScalarConverter	&ScalarConverter::operator=(const ScalarConverter &o)
{
	std::cout << "Copy assignment operator called" << std::endl;
	(void)o;
	return (*this);
}

void	ScalarConverter::convert(std::string &l)
{	
	if ((l.find(".") != std::string::npos && l.find("f") == std::string::npos) || l == "+inf" || l == "-inf" || l == "nan")
	{
		if (l == "nan")
			d = std::numeric_limits<double>::quiet_NaN();
		else if (l.find("inf") != std::string::npos)
		{
			d = std::numeric_limits<double>::infinity();
			if (l.find("-") != std::string::npos)
				d *= -1;
		}
		else
			d = std::atof(l.c_str());
		c = static_cast<char>(d);
		i = static_cast<float>(d);
		f = static_cast<double>(d);
	}
	else if (l.find("f") != std::string::npos)
	{
		if (l == "nanf")
			f = std::numeric_limits<float>::quiet_NaN();
		else if (l.find("inf") != std::string::npos)
		{
			f = std::numeric_limits<float>::infinity();
			if (l.find("-") != std::string::npos)
				f *= -1;
		}
		else
			f = std::atof(l.c_str());
		c = static_cast<char>(f);
		i = static_cast<float>(f);
		d = static_cast<double>(f);
	}
	else
	{
		i = std::atof(l.c_str());
		c = static_cast<char>(i);
		f = static_cast<float>(i);
		d = static_cast<double>(i);
	}
	Scalar_print();
}

void	ScalarConverter::Scalar_print(void)
{
	std::cout << "char : ";
	if (c < 0 || c > 127 || n == false)
		std::cout << "impossible";
	else if (c <= 31 && c >= 0)
		std::cout << "Non displayable";
	else
		std::cout << c;
	std::cout << std::endl;
	std::cout << "int : ";
	if (n == false)
		std::cout << "impossible";
	else
		std::cout << i;
	std::cout << std::endl;
	std::cout << "float : ";
	std::cout << f;
	if (i == f)
		std::cout << ".0";
	std::cout << "f" << std::endl;
	std::cout << "double : ";
	std::cout << d;
	if (i == f)
		std::cout << ".0";
	std::cout << std::endl;
	n = true;
}

bool	ScalarConverter::input_check(std::string &l)
{
	int	i = 0;

	if (l == "-inff" || l == "+inff" || l == "nanf" || l == "-inf" || l == "+inf" || l == "nan")
	{
		n = false;
		return (true);
	}
	for (int j = 0; l[j]; j++)
	{
		if (!isdigit(l[j]))
		{
			if (l[j] == '.')
			{
				if (!l[j + 1])
					return (false);
				i++;
			}
			else if (l[j] == 'f' || l[j] == 'F')
			{
				if (l[j + 1])
					return (false);
			}
			else
				return (false);
		}
	}
	if (i > 1)
		return (false);
	return (true);
}
