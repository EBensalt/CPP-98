/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebensalt <ebensalt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 11:37:51 by ebensalt          #+#    #+#             */
/*   Updated: 2023/05/17 18:56:53 by ebensalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_TPP
# define EASYFIND_TPP
# include "easyfind.hpp"

template<typename T>
void	easyfind(T c, int i)
{
	typename T::iterator it = std::find(c.begin(), c.end(), i);
	if (it == c.end())
		throw("Int Not found!");
	else
		std::cout << i << " found at position " << std::distance(c.begin(), it) << std::endl;
}

#endif
