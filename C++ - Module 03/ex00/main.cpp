/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebensalt <ebensalt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 10:23:51 by ebensalt          #+#    #+#             */
/*   Updated: 2023/04/07 08:35:13 by ebensalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap	a("mehdi");

	std::cout << a << std::endl;
	a.attack("zombie");
	std::cout << a << std::endl;
	a.setAd(3);
	a.attack("zomnie");
	std::cout << a << std::endl;
	a.takeDamage(5);
	std::cout << a << std::endl;
	a.beRepaired(7);
	std::cout << a << std::endl;
}
