/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebensalt <ebensalt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 00:44:26 by ebensalt          #+#    #+#             */
/*   Updated: 2023/04/06 05:39:20 by ebensalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int	Fixed::fractional = 8;

Fixed::Fixed(void) : value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int i) : value(i << fractional)
{
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float f) : value(roundf(f * (1 << fractional)))
{
	std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &o)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = o;
}

Fixed	&Fixed::operator=(const Fixed &o)
{
	std::cout << "Copy assignment operator called" << std::endl;
	value = o.getRawBits();
	return (*this);
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (value);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	value = raw;
}

float	Fixed::toFloat(void) const
{
	return (value / (float)(1 << fractional));
}

int	Fixed::toInt(void) const
{
	return (value / (1 << fractional));
}

std::ostream	&operator<<(std::ostream &o, Fixed const &f)
{
	o << f.toFloat();
	return (o);
}
