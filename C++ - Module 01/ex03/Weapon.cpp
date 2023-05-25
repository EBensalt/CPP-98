/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebensalt <ebensalt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 01:17:18 by ebensalt          #+#    #+#             */
/*   Updated: 2023/03/28 18:33:55 by ebensalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string t) : type(t)
{
	if (!type.size())
	{
		std::cerr << "invalide Weapon!" << std::endl;
		exit(1);
	}
}

const std::string	&Weapon::getType(void)
{
	std::string	&t = type;
	return (t);
}

void	Weapon::setType(std::string t)
{
	if (!t.size())
	{
		std::cerr << "invalide Weapon!" << std::endl;
		exit(3);
	}
	type = t;
}

Weapon::~Weapon(void) {}
