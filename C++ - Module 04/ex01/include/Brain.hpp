/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebensalt <ebensalt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 07:17:11 by ebensalt          #+#    #+#             */
/*   Updated: 2023/04/08 07:21:02 by ebensalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP
# include <iostream>

class	Brain
{
	private	:
		std::string	ideas[100];
	public	:
		Brain(void);
		Brain(const Brain &o);
		~Brain(void);

		Brain	&operator=(const Brain &o);
};

#endif