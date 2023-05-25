/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebensalt <ebensalt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 21:23:40 by ebensalt          #+#    #+#             */
/*   Updated: 2023/04/09 01:09:20 by ebensalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP
# include "Animal.hpp"
# include "Brain.hpp"

class	Cat	: public Animal
{
	private	:
		Brain	*b;
	public	:
		Cat(void);
		Cat(const Cat &o);
		~Cat(void);

		Cat	&operator=(const Cat &o);

		void	makeSound(void) const;
};

#endif
