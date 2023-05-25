/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebensalt <ebensalt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 07:35:53 by ebensalt          #+#    #+#             */
/*   Updated: 2023/03/26 17:54:08 by ebensalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

void	check_err(std::string s)
{
	std::ifstream	n(s);
	if (!n.is_open())
	{
		std::cerr << "error : can not open file : " << s << std::endl;
		exit (2);
	}
	n.seekg(0, std::ios::end);
	if (n.tellg() == 0)
	{
		std::cerr << "error : file \"" << s << "\" is empty" << std::endl;
		exit (3);
	}
	n.close();
}

int	main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cerr << "error : wrong number of parameters!" << std::endl;
		return (1);
	}
	else
	{
		std::string	filename = av[1];
		check_err(filename);
		std::string	s1 = av[2];
		std::string	s2 = av[3];
		std::ifstream	i(filename);
		std::ofstream	o(filename + ".replace");
		std::string		s;

		while (getline(i, s))
		{
			if (s.find(s1) == std::string::npos)
				o << s << std::endl;
			else
			{
				s = s.substr(0, s.find(s1)) + s2 + s.substr(s.find(s1) + s1.size());
				o << s << std::endl;
			}
		}
		i.close();
		o.close();
	}
}