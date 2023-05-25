/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebensalt <ebensalt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 10:24:44 by ebensalt          #+#    #+#             */
/*   Updated: 2023/04/07 08:21:15 by ebensalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <iostream>

class	ClapTrap
{
	private	:
		std::string		name;
		unsigned int	hp;
		unsigned int	ep;
		unsigned int	ad;
	public	:
		ClapTrap(void);
		ClapTrap(const ClapTrap &o);
		~ClapTrap(void);
		ClapTrap(std::string n);

		ClapTrap	&operator=(const ClapTrap &o);
		
		void			attack(const std::string & target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);
		std::string		getName(void) const;
		unsigned int	getHp(void) const;
		unsigned int	getEp(void) const;
		unsigned int	getAd(void) const;
		void			setName(std::string const &n);
		void			setHp(unsigned int i);
		void			setEp(unsigned int i);
		void			setAd(unsigned int i);
};

std::ostream	&operator<<(std::ostream &o, ClapTrap const &c);

#endif
