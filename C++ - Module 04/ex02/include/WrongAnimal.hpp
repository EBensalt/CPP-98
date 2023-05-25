/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebensalt <ebensalt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 06:33:10 by ebensalt          #+#    #+#             */
/*   Updated: 2023/04/08 06:59:41 by ebensalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP
# include <iostream>

class	WrongAnimal
{
	protected	:
		std::string	type;
	public		:
		WrongAnimal(void);
		WrongAnimal(const WrongAnimal &o);
		~WrongAnimal(void);

		WrongAnimal	&operator=(const WrongAnimal &o);

		void				makeSound(void) const;
		std::string const	&getType(void) const;
		void				setType(std::string const &t);
};

#endif
