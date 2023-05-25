/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebensalt <ebensalt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 20:44:18 by ebensalt          #+#    #+#             */
/*   Updated: 2023/05/21 16:24:07 by ebensalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int	main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cerr << "Error : wrong number of arguments!" << std::endl;
		return (1);
	}
	RPN	r;
	
	if(r.input_check(av[1]))
		r.execute();
}
