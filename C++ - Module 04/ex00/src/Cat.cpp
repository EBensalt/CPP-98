/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebensalt <ebensalt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 21:23:58 by ebensalt          #+#    #+#             */
/*   Updated: 2023/04/09 01:06:10 by ebensalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Cat.hpp"

Cat::Cat(void)
{
	std::cout << "Cat default constructor called" << std::endl;
	type = "Cat";
}

Cat::Cat(const Cat &o) : Animal(o)
{
	std::cout << "Cat copy constructor called" << std::endl;
	*this = o;
}

Cat::~Cat(void)
{
	std::cout << "Cat destructor called" << std::endl;
}

Cat	&Cat::operator=(const Cat &o)
{
	std::cout << "Cat copy assignment operator called" << std::endl;
	(void)o;
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "meeooowwww!" << std::endl;
}
