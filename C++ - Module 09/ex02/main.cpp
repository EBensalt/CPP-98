/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebensalt <ebensalt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 15:38:45 by ebensalt          #+#    #+#             */
/*   Updated: 2023/05/24 16:13:19 by ebensalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int	main(int ac, char **av)
{
	if (ac < 2)
	{
		std::cerr << "Error : wrong number of arguments!" << std::endl;
		return (1);
	}
	PmergeMe	p;
	
	if (p.input_check(av))
	{
		double	b = p.get_time();
		p.vector_fill(av);
		p.vector_sort();
		double	tv = p.get_time() - b;
		b = p.get_time();
		p.deque_fill(av);
		p.deque_sort();
		double	td = p.get_time() - b;
		p.print(av, tv, td);
		return (0);
	}
	return (1);
}
