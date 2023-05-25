/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebensalt <ebensalt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 19:58:16 by ebensalt          #+#    #+#             */
/*   Updated: 2023/03/28 18:47:31 by ebensalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	int		n1 = 3;
	int		n2 = 5;
	Zombie	*z1 = zombieHorde(n1, "Zombie");
	Zombie	*z2 = zombieHorde(n2, "ebensalt");

	for (int i = 0; i < n1; i++)
		z1[i].announce();
	delete[] z1;
	for (int i = 0; i < n2; i++)
		z2[i].announce();
	delete[] z2;
}