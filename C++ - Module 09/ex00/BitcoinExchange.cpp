/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebensalt <ebensalt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 14:53:05 by ebensalt          #+#    #+#             */
/*   Updated: 2023/05/24 21:19:13 by ebensalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(void) : v(0), day(0)
{
	std::cout << "Default constructor called" << std::endl;
	std::ifstream	i("cpp_09/data.csv");
	if (!i)
	{
		std::cerr << "Error : failed to open file data.csv!" << std::endl;
		return ;
	}
	std::string	l;
	std::getline(i, l);
	while (std::getline(i, l))
	{
		std::string	d = l.substr(0, l.find(","));
		std::string	vs = l.substr(l.find(",") + 1, l.size());
		double		v = std::atof(vs.c_str());
		db.insert(std::make_pair(d, v));
	}
	i.close();
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &o)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = o;
}

BitcoinExchange::~BitcoinExchange(void)
{
	std::cout << "Destructor called" << std::endl;
}

BitcoinExchange	&BitcoinExchange::operator=(const BitcoinExchange &o)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &o)
		db = o.db;
	return (*this);
}

bool	BitcoinExchange::check_file_input(std::ifstream &i, char *av)
{
	if (!i)
	{
		std::cerr << "Error : failed to open file " << av << "!" << std::endl;
		return (false);
	}
	if (i.peek() == std::ifstream::traits_type::eof())
		return (false);
	char	c;
	std::ifstream	j(av);
	while (j.get(c))
		if (!std::isspace(c))
		{
			j.close();
			return (true);
		}
	j.close();
	return (false);
}

bool	BitcoinExchange::check_line_input(std::string &l)
{
	if (l.find("|") == std::string::npos)
	{
		std::cout << "Error : bad input => " << l << std::endl;
		return (false);
	}
	std::string	d = l.substr(0, l.find("|"));
	std::string	vs = l.substr(l.find("|") + 1, l.size());
	if (d.find_first_not_of(" \t") == std::string::npos || vs.find_first_not_of(" \t") == std::string::npos)
	{
		std::cout << "Error : incomplete input => " << l << std::endl;
		return (false);
	}
	std::istringstream	is(vs);
	if (!(is >> v))
	{
		std::cout << "Error : not a number" << std::endl;
		return (false);
	}
	char				c;
	while (is.get(c))
		if (!std::isspace(c))
		{
			std::cout << "Error : not a number" << std::endl;
			return (false);
		}
	if (v < 0)
	{
		std::cout << "Error : not a positive number" << std::endl;
		return (false);
	}
	if (v > 1000)
	{
		std::cout << "Error : too large number" << std::endl;
		return (false);
	}
	return (check_date(d));
}

void	BitcoinExchange::exchange(std::ifstream	&i)
{
	std::string	l;
	double		r;

	while (std::getline(i, l))
	{
		r = 0;
		if (check_line_input(l))
		{
			std::map<std::string, double>::iterator	it = db.upper_bound(date);
			if (it != db.begin())
			{
				it--;
				r = it->second * v;
			}
			std::cout << date << " => " << v << " => " << r << std::endl;
			date = "";
		}
	}
}

bool	BitcoinExchange::check_date(std::string &d)
{
	for (unsigned int i = 0; i < d.size(); i++)
		if (!std::isdigit(d[i]) && d[i] != '-' && !std::isspace(d[i]))
		{
			std::cout << "Error : bad date" << std::endl;
			return (false);
		}
	int					y;
	int					m;
	std::istringstream	is(d);
	char				s;

	is >> y >> s >> m >> s >> day;
	if (y < 2009 || y > 2023 || m < 1 || m > 12 || day < 1)
	{
		std::cout << "Error : bad date" << std::endl;
		return (false);
	}
	else if (m == 2)
	{
		if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0)
		{
			if (day > 29)
			{
				std::cout << "Error : bad date" << std::endl;
				return (false);
			}
		}
		else if (day > 28)
		{
			std::cout << "Error : bad date" << std::endl;
				return (false);
		}
	}
	else if ((m == 4 || m == 6 || m == 9 || m == 11) && day > 30)
	{
			std::cout << "Error : bad date" << std::endl;
				return (false);
	}
	else if (day > 31)
	{
		std::cout << "Error : bad date" << std::endl;
		return (false);
	}
	for (std::string::iterator it = d.begin(); it != d.end(); it++)
		if (!std::isspace(*it))
			date += *it;
	return (true);
}
