/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebensalt <ebensalt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 08:53:55 by ebensalt          #+#    #+#             */
/*   Updated: 2023/04/07 20:52:18 by ebensalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
	std::cout << "FragTrap Default constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &o) : ClapTrap(o)
{
	std::cout << "FragTrap Copy constructor called" << std::endl;
	*this = o;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap Destructor called" << std::endl;
}

FragTrap::FragTrap(std::string n) : ClapTrap(n)
{
	std::cout << "FragTrap Parameterized constructor called" << std::endl;
	setHp(100);
	setEp(100);
	setAd(30);
}

FragTrap	&FragTrap::operator=(const FragTrap &o)
{
	(void)o;
	std::cout << "FragTrap Copy assignment operator called" << std::endl;
	return (*this);
}

void	FragTrap::attack(const std::string &target)
{
	if (getEp() > 0)
	{
		std::cout << "FragTrap " << getName() << " attacks " << target << ", causing " << getAd() << " points of damage!" << std::endl;
		setEp(getEp() - 1);
	}
	else
		std::cout << "FragTrap " << getName() << " cannot attack " << target << std::endl;
}

void	FragTrap::guardGate(void)
{
	std::cout << "FragTrap " << getName() << " is now in Gate keeper mode" << std::endl;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "High fives guys" << std::endl;
}

std::ostream	&operator<<(std::ostream &o, FragTrap const &c)
{
	o << "name           : " << c.getName() << std::endl;
	o << "hit points     : " << c.getHp() << std::endl;
	o << "energie points : " << c.getEp() << std::endl;
	o << "attack damage  : " << c.getAd();
	return (o);
}
