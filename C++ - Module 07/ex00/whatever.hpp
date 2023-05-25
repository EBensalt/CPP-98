/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebensalt <ebensalt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 21:28:19 by ebensalt          #+#    #+#             */
/*   Updated: 2023/05/17 20:44:02 by ebensalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template<typename T>
void	swap(T &a, T &b)
{
	T	c = a;
	a = b;
	b = c;
}

template<typename T>
T		min(T &a, T &b)
{
	if (a < b)
		return (a);
	else
		return (b);
}

template<typename T>
T		max(T &a, T &b)
{
	if (a > b)
		return (a);
	else
		return (b);
}

#endif