/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebensalt <ebensalt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 01:19:08 by ebensalt          #+#    #+#             */
/*   Updated: 2023/03/27 22:30:22 by ebensalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP
# include "Weapon.hpp"

class	HumanB
{
	private	:
		Weapon		*weapon;
		std::string	name;
	public	:
		HumanB(std::string n);
		void	attack(void);
		void	setWeapon(Weapon &W);
		~HumanB(void);
};

#endif
