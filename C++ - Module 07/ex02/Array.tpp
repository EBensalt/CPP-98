/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebensalt <ebensalt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 14:50:31 by ebensalt          #+#    #+#             */
/*   Updated: 2023/05/09 16:21:52 by ebensalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TPP
# define ARRAY_TPP
# include "Array.hpp"

template<typename T>
Array<T>::Array(void) : a(new T[0]), i(0)
{
	std::cout << "Default constructor called" << std::endl;
}

template<typename T>
Array<T>::Array(const Array &o)
{
	std::cout << "Copy constructor called" << std::endl;
	i = o.i;
	a = new T[i];
	for (unsigned int j = 0; j < i; j++)
		a[j] = o.a[j];
}

template<typename T>
Array<T>::~Array(void)
{
	std::cout << "Destructor called" << std::endl;
	delete[] a;
}

template<typename T>
Array<T>::Array(unsigned int n) : a(new T[n]), i(n) {}

template<typename T>
Array<T>	&Array<T>::operator=(const Array &o)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &o)
	{
		i = o.i;
		delete[] a;
		a = new T[i];
		for (unsigned int j = 0; j < i; j++)
			a[j] = o.a[j];
	}
	return (*this);
}

template<typename T>
T	&Array<T>::operator[](unsigned int index)
{
	if (index < i)
		return (a[index]);
	else
		throw(NotAccessible());
}

template<typename T>
unsigned int	Array<T>::size(void) const
{
	return (i);
}

template<typename T>
const char	*Array<T>::NotAccessible::what(void) const throw()
{
	return ("Can't access this value!");
}

#endif