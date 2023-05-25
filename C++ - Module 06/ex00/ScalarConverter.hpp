/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebensalt <ebensalt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 17:37:15 by ebensalt          #+#    #+#             */
/*   Updated: 2023/05/05 18:07:59 by ebensalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP
# include <iostream>
# include <limits>

class ScalarConverter
{
	private	:
		static char		c;
		static int		i;
		static float	f;
		static double	d;
		static bool		n;
	public	:
		ScalarConverter(void);
		ScalarConverter(const ScalarConverter &o);
		~ScalarConverter(void);
		
		ScalarConverter	&operator=(const ScalarConverter &o);
		
		static void	convert(std::string &l);
		static void	Scalar_print(void);
		static bool	input_check(std::string &l);
};

#endif