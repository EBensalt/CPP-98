/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebensalt <ebensalt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 11:27:58 by ebensalt          #+#    #+#             */
/*   Updated: 2023/05/06 11:51:32 by ebensalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer(void)
{
	std::cout << "Default constructor called" << std::endl;
}

Serializer::Serializer(const Serializer &o)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = o;
}

Serializer::~Serializer(void)
{
	std::cout << "Destructor called" << std::endl;
}

Serializer	&Serializer::operator=(const Serializer &o)
{
	std::cout << "Copy assignment operator called" << std::endl;
	(void)o;
	return (*this);
}

uintptr_t	Serializer::serialize(Data *ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data	*Serializer::deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}
