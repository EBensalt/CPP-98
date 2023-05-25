/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebensalt <ebensalt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 16:19:31 by ebensalt          #+#    #+#             */
/*   Updated: 2023/05/09 16:31:44 by ebensalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>

template<typename T>
void	print(T i)
{
	std::cout << i << std::endl;
}

int	main(void)
{
	int			i[10] = {1, 2, -4, 8, 16, -32, 64, 128, -256, 512};
	char		c[10] = {'a', 'd', 'G', 'h', 'g', 'q', 'Y', 's', 'A', 'u'};
	std::string	s[3] = {"Elmehdi", "Bensaltana", "ebensalt"};

	iter(i, 10, print);
	iter(c, 10, print);
	iter(s, 3, print);
}
