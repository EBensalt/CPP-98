/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebensalt <ebensalt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 01:24:49 by ebensalt          #+#    #+#             */
/*   Updated: 2023/04/07 08:31:23 by ebensalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public	:
		ScavTrap(void);
		ScavTrap(const ScavTrap &o);
		~ScavTrap(void);
		ScavTrap(std::string n);

		ScavTrap	&operator=(const ScavTrap &o);

		void	attack(const std::string &target);
		void	guardGate(void);
};

std::ostream	&operator<<(std::ostream &o, ScavTrap const &c);

#endif
