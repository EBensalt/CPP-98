/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebensalt <ebensalt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 08:54:04 by ebensalt          #+#    #+#             */
/*   Updated: 2023/04/07 20:45:41 by ebensalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public	:
		FragTrap(void);
		FragTrap(const FragTrap &o);
		~FragTrap(void);
		FragTrap(std::string n);

		FragTrap	&operator=(const FragTrap &o);

		void	attack(const std::string &target);
		void	guardGate(void);
		void	highFivesGuys(void);
};

std::ostream	&operator<<(std::ostream &o, FragTrap const &c);

#endif
