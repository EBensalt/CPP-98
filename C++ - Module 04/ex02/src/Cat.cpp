/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebensalt <ebensalt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 21:23:58 by ebensalt          #+#    #+#             */
/*   Updated: 2023/04/09 01:10:39 by ebensalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Cat.hpp"

Cat::Cat(void)
{
	std::cout << "Cat default constructor called" << std::endl;
	type = "Cat";
	b = new Brain;
}

Cat::Cat(const Cat &o) : Animal(o)
{
	std::cout << "Cat copy constructor called" << std::endl;
	b = new Brain;
	*b = *o.b;
}

Cat::~Cat(void)
{
	std::cout << "Cat destructor called" << std::endl;
	delete b;
}

Cat	&Cat::operator=(const Cat &o)
{
	std::cout << "Cat copy assignment operator called" << std::endl;
	if (this != &o)
	{
		delete b;
		b = new Brain;
		*b = *o.b;
	}
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "meeooowwww!" << std::endl;
}
