/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebensalt <ebensalt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 01:17:01 by ebensalt          #+#    #+#             */
/*   Updated: 2023/03/27 22:30:29 by ebensalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP
# include <iostream>

class	Weapon
{
	private	:
		std::string	type;
	public	:
		Weapon(std::string t);
		const std::string	&getType(void);
		void				setType(std::string t);
		~Weapon(void);
};

#endif