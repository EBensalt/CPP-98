/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebensalt <ebensalt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 14:56:39 by ebensalt          #+#    #+#             */
/*   Updated: 2023/05/09 16:25:41 by ebensalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int	main(void)
{
	try
	{
		Array<int>	i;
		Array<char>	c(3);
		Array<char>	c2(c);
		Array<int>	i2(5);

		i = i2;
		for (int j = 0; j < 5; j++)
			std::cout << "i = " << i[j] << std::endl;
		for (int j = 0; j < 3; j++)
			c[j] = 42;
		for (int j = 0; j < 3; j++)
			std::cout << "c = " << c[j] << std::endl;
		for (int j = 0; j < 3; j++)
			std::cout << "c2 = " << c2[j] << std::endl;
		for (int j = 0; j < 5; j++)
			std::cout << "i2 = " << i2[j] << std::endl;
		std::cout << "i size = " << i.size() << std::endl;
		std::cout << "i = " << i[5] << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}
