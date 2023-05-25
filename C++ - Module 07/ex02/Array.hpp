/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebensalt <ebensalt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 14:36:11 by ebensalt          #+#    #+#             */
/*   Updated: 2023/05/09 16:12:25 by ebensalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP
# include <iostream>
# include <exception>

template<typename T>
class Array
{
	private	:
		T				*a;
		unsigned int	i;
	public	:
		Array(void);
		Array(const Array &o);
		~Array(void);
		Array(unsigned int n);

		Array	&operator=(const Array &o);
		T		&operator[](unsigned int index);
		
		unsigned int	size(void) const;
		
		class NotAccessible	: public std::exception
		{
			public	:
				const char	*what(void) const throw();
		};
};

# include "Array.tpp"
#endif
