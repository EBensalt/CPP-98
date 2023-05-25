/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebensalt <ebensalt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 21:23:50 by ebensalt          #+#    #+#             */
/*   Updated: 2023/04/09 01:06:00 by ebensalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Dog.hpp"

Dog::Dog(void)
{
	std::cout << "Dog default constructor called" << std::endl;
	type = "Dog";
}

Dog::Dog(const Dog &o) : Animal(o)
{
	std::cout << "Dog copy constructor called" << std::endl;
	*this = o;
}

Dog::~Dog(void)
{
	std::cout << "Dog destructor called" << std::endl;
}

Dog	&Dog::operator=(const Dog &o)
{
	std::cout << "Dog copy assignment operator called" << std::endl;
	(void)o;
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "woooooffff!" << std::endl;
}
