/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebensalt <ebensalt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 18:54:19 by ebensalt          #+#    #+#             */
/*   Updated: 2023/03/28 04:15:24 by ebensalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie	z("zombie");
	Zombie	*z1 = newZombie("mehdi");

	z.announce();
	z1->announce();
	randomChump("ebensalt");
	delete z1;
}