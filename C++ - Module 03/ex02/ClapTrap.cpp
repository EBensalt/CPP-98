/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebensalt <ebensalt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 10:24:11 by ebensalt          #+#    #+#             */
/*   Updated: 2023/04/07 07:54:46 by ebensalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : hp(0), ep(0), ad(0)
{
	std::cout << "ClapTrap Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &o)
{
	std::cout << "ClapTrap Copy constructor called" << std::endl;
	*this = o;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap Destructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string n) : name(n), hp(10), ep(10), ad(0)
{
	std::cout << "ClapTrap Parameterized constructor called" << std::endl;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &o)
{
	std::cout << "ClapTrap Copy assignment operator called" << std::endl;
	name = o.name;
	hp = o.hp;
	ep = o.ep;
	ad = o.ad;
	return (*this);
}

void	ClapTrap::attack(const std::string &target)
{
	if (ep > 0)
	{
		std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << ad << " points of damage!" << std::endl;
		ep--;
	}
	else
		std::cout << "ClapTrap " << name << " cannot attack " << target << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << name << " took damage" << ", losing " << amount << " of hit points!" << std::endl;
	hp -= amount;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (ep > 0)
	{
		std::cout << "ClapTrap " << name << " repaires itself" << ", geting " << amount << " of hit points back!" << std::endl;
		hp += amount;
		ep--;
	}
	else
		std::cout << "ClapTrap " << name << " cannot repaires itself!" << std::endl;
}

std::string		ClapTrap::getName() const
{
	return (name);
}

unsigned int	ClapTrap::getHp() const
{
	return (hp);
}

unsigned int	ClapTrap::getEp() const
{
	return (ep);
}

unsigned int	ClapTrap::getAd() const
{
	return (ad);
}

void	ClapTrap::setName(std::string const &n)
{
	name = n;
}

void	ClapTrap::setHp(unsigned int i)
{
	hp = i;
}

void	ClapTrap::setEp(unsigned int i)
{
	ep = i;
}

void	ClapTrap::setAd(unsigned int i)
{
	ad = i;
}

std::ostream	&operator<<(std::ostream &o, ClapTrap const &c)
{
	o << "name           : " << c.getName() << std::endl;
	o << "hit points     : " << c.getHp() << std::endl;
	o << "energie points : " << c.getEp() << std::endl;
	o << "attack damage  : " << c.getAd();
	return (o);
}
