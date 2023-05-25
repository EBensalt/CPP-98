/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebensalt <ebensalt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 01:25:04 by ebensalt          #+#    #+#             */
/*   Updated: 2023/04/07 08:50:23 by ebensalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
	std::cout << "ScavTrap Default constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &o) : ClapTrap(o)
{
	std::cout << "ScavTrap Copy constructor called" << std::endl;
	*this = o;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap Destructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string n) : ClapTrap(n)
{
	std::cout << "ScavTrap Parameterized constructor called" << std::endl;
	setHp(100);
	setEp(50);
	setAd(20);
}

ScavTrap	&ScavTrap::operator=(const ScavTrap &o)
{
	(void)o;
	std::cout << "ScavTrap Copy assignment operator called" << std::endl;
	return (*this);
}

void	ScavTrap::attack(const std::string &target)
{
	if (getEp() > 0)
	{
		std::cout << "ScavTrap " << getName() << " attacks " << target << ", causing " << getAd() << " points of damage!" << std::endl;
		setEp(getEp() - 1);
	}
	else
		std::cout << "ScavTrap " << getName() << " cannot attack " << target << std::endl;
}

void	ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap " << getName() << " is now in Gate keeper mode" << std::endl;
}

std::ostream	&operator<<(std::ostream &o, ScavTrap const &c)
{
	o << "name           : " << c.getName() << std::endl;
	o << "hit points     : " << c.getHp() << std::endl;
	o << "energie points : " << c.getEp() << std::endl;
	o << "attack damage  : " << c.getAd();
	return (o);
}
