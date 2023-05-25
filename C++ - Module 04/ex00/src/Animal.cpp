/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebensalt <ebensalt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 21:06:05 by ebensalt          #+#    #+#             */
/*   Updated: 2023/04/08 22:21:11 by ebensalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Animal.hpp"

Animal::Animal(void)
{
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(const Animal &o)
{
	std::cout << "Animal copy constructor called" << std::endl;
	*this = o;
}

Animal::~Animal(void)
{
	std::cout << "Animal destructor called" << std::endl;
}

Animal	&Animal::operator=(const Animal &o)
{
	std::cout << "Animal copy assignment operator called" << std::endl;
	if (this != &o)
		type = o.type;
	return (*this);
}

void	Animal::makeSound(void) const
{
	std::cout << "Animal sound!" << std::endl;
}

std::string const	&Animal::getType(void) const
{
	return (type);
}

void	Animal::setType(std::string const &t)
{
	type = t;
}
