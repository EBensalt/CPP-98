/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebensalt <ebensalt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 21:05:59 by ebensalt          #+#    #+#             */
/*   Updated: 2023/04/09 01:05:14 by ebensalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <iostream>

class	Animal
{
	protected	:
		std::string	type;
	public		:
		Animal(void);
		Animal(const Animal &o);
		virtual ~Animal(void);

		Animal	&operator=(const Animal &o);

		virtual void		makeSound(void) const;
		std::string const	&getType(void) const;
		void				setType(std::string const &t);
};

#endif
