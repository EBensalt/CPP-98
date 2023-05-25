/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebensalt <ebensalt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 18:54:48 by ebensalt          #+#    #+#             */
/*   Updated: 2023/03/27 22:21:36 by ebensalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>

class Zombie
{
	private :
		std::string	name;
	public :
		Zombie();
		~Zombie();
		void	announce(void);
		void	set_name(std::string n);
};

Zombie	*zombieHorde(int N, std::string name);

#endif
