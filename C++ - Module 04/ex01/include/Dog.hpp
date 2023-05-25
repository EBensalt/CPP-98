/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebensalt <ebensalt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 21:23:26 by ebensalt          #+#    #+#             */
/*   Updated: 2023/04/09 01:09:32 by ebensalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP
# include "Animal.hpp"
# include "Brain.hpp"

class	Dog	: public Animal
{
	private	:
		Brain	*b;
	public	:
		Dog(void);
		Dog(const Dog &o);
		~Dog(void);

		Dog	&operator=(const Dog &o);

		void	makeSound(void) const;
};

#endif
