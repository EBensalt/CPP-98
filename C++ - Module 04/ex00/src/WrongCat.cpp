/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebensalt <ebensalt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 06:36:01 by ebensalt          #+#    #+#             */
/*   Updated: 2023/04/09 01:08:04 by ebensalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/WrongCat.hpp"

WrongCat::WrongCat(void)
{
	std::cout << "WrongCat default constructor called" << std::endl;
	type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &o) : WrongAnimal(o)
{
	std::cout << "WrongCat copy constructor called" << std::endl;
	*this = o;
}

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat destructor called" << std::endl;
}

WrongCat	&WrongCat::operator=(const WrongCat &o)
{
	std::cout << "WrongCat copy assignment operator called" << std::endl;
	(void)o;
	return (*this);
}

void	WrongCat::makeSound(void) const
{
	std::cout << "meeooowwww!" << std::endl;
}
