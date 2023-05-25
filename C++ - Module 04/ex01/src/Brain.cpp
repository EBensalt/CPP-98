/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebensalt <ebensalt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 07:16:59 by ebensalt          #+#    #+#             */
/*   Updated: 2023/04/08 22:19:21 by ebensalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain(const Brain &o)
{
	std::cout << "Brain copy constructor called" << std::endl;
	*this = o;
}

Brain::~Brain(void)
{
	std::cout << "Brain destructor called" << std::endl;
}

Brain	&Brain::operator=(const Brain &o)
{
	std::cout << "Brain copy assignment operator called" << std::endl;
	if (this != &o)
	{
		for (int i = 0; i < 100; i++)
			ideas[i] = o.ideas[i];
	}
	return (*this);
}
