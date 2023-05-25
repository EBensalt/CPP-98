/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebensalt <ebensalt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 14:53:15 by ebensalt          #+#    #+#             */
/*   Updated: 2023/05/24 17:41:30 by ebensalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int	main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cerr << "Error : wrong number of arguments!" << std::endl;
		return (1);
	}
	BitcoinExchange	a;

	std::ifstream	i(av[1]);
	if (a.check_file_input(i, av[1]))
		a.exchange(i); 
	i.close();
}
