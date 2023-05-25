/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebensalt <ebensalt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 18:55:29 by ebensalt          #+#    #+#             */
/*   Updated: 2023/03/28 04:07:16 by ebensalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*newZombie(std::string name)
{
	if (name.size())
	{
		Zombie	*z = new Zombie(name);
		return (z);
	}
	std::cerr << "invalid Zombie!" << std::endl;
	exit(1);
}
