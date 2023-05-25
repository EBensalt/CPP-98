/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebensalt <ebensalt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 15:29:18 by ebensalt          #+#    #+#             */
/*   Updated: 2023/05/16 21:24:11 by ebensalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_TPP
# define MUTANTSTACK_TPP
# include "MutantStack.hpp"

template<typename T, typename C>
MutantStack<T, C>::MutantStack(void)
{
	std::cout << "Default constructor called" << std::endl;
}

template<typename T, typename C>
MutantStack<T, C>::MutantStack(const MutantStack &o)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = o;
}

template<typename T, typename C>
MutantStack<T, C>::~MutantStack(void)
{
	std::cout << "Destructor called" << std::endl;
}

template<typename T, typename C>
MutantStack<T, C>	&MutantStack<T, C>::operator=(const MutantStack &o)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &o)
		this->c = o.c;
	return (*this);
}

template<typename T, typename C>
typename MutantStack<T, C>::iterator	MutantStack<T, C>::begin(void)
{
	return (this->c.begin());
}

template<typename T, typename C>
typename MutantStack<T, C>::iterator	MutantStack<T, C>::end(void)
{
	return (this->c.end());
}

#endif
