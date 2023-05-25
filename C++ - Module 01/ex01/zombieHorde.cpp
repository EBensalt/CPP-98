/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebensalt <ebensalt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 20:00:12 by ebensalt          #+#    #+#             */
/*   Updated: 2023/03/28 04:21:15 by ebensalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name)
{
	if (N < 1 || !name.size())
	{
		std::cerr << "invalid Zombie!" << std::endl;
		exit(1);
	}

	Zombie	*z = new Zombie[N];

	for (int i = 0; i < N; i++)
		z[i].set_name(name);
	return(z);
}
