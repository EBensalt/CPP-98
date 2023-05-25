/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebensalt <ebensalt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 01:17:47 by ebensalt          #+#    #+#             */
/*   Updated: 2023/03/26 06:42:34 by ebensalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP
# include "Weapon.hpp"

class	HumanA
{
	private	:
		Weapon		&weapon;
		std::string	name;
	public	:
		HumanA(std::string n, Weapon &W);
		void	attack(void);
		~HumanA(void);
};

#endif
