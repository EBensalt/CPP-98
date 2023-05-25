/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebensalt <ebensalt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 18:18:54 by ebensalt          #+#    #+#             */
/*   Updated: 2023/05/17 14:33:35 by ebensalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP
# include <vector>
# include <iostream>
# include <algorithm>

class Span
{
	private	:
		std::vector<int>	v;
		unsigned int		N;
	public	:
		Span(void);
		Span(const Span &o);
		~Span(void);
		Span(unsigned int n);

		Span	&operator=(const Span &o);

		void	addNumber(int n);
		int		shortestSpan(void);
		int		longestSpan(void);
		void	addNNumber(int n);
		void	print(void) const;
};

#endif
