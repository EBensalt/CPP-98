/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebensalt <ebensalt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 17:37:13 by ebensalt          #+#    #+#             */
/*   Updated: 2023/05/05 18:10:17 by ebensalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int	main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cerr << "wrong number of arguments" << std::endl;
		return (1);
	}
	std::string		s = av[1];
	if (ScalarConverter::input_check(s))
		ScalarConverter::convert(s);
	else
	{
		std::cerr << s << " is not a valide input!" << std::endl;
		return (1);
	}
}
