/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebensalt <ebensalt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 00:24:07 by ebensalt          #+#    #+#             */
/*   Updated: 2023/04/06 05:38:51 by ebensalt         ###   ########.fr       */
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

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

Fixed	&Fixed::operator=(const Fixed &o)
{
	std::cout << "Copy assignment operator called" << std::endl;
	value = o.getRawBits();
	return (*this);
}

bool	Fixed::operator>(const Fixed &o) const
{
	return (value > o.value);
}

bool	Fixed::operator<(const Fixed &o) const
{
	return (value < o.value);
}

bool	Fixed::operator>=(const Fixed &o) const
{
	return (value >= o.value);
}

bool	Fixed::operator<=(const Fixed &o) const
{
	return (value <= o.value);
}

bool	Fixed::operator==(const Fixed &o) const
{
	return (value == o.value);
}

bool	Fixed::operator!=(const Fixed &o) const
{
	return (value != o.value);
}

Fixed	Fixed::operator+(const Fixed &o) const
{
	Fixed	r;
	r.setRawBits(value + o.value);
	return (r);
}

Fixed	Fixed::operator-(const Fixed &o) const
{
	Fixed	r;
	r.setRawBits(value - o.value);
	return (r);
}

Fixed	Fixed::operator*(const Fixed &o) const
{
	Fixed	r;
	r.setRawBits(((float)value / (1 << fractional)) * o.value);
	return (r);
}

Fixed	Fixed::operator/(const Fixed &o) const
{
	Fixed	r;
	r.setRawBits(((float)value / o.value) * (1 << fractional));
	return (r);
}

Fixed	Fixed::operator++(int)
{
	Fixed	o(*this);
	value++;
	return (o);
}

Fixed	&Fixed::operator++(void)
{
	++value;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed	o(*this);
	value--;
	return (o);
}

Fixed	&Fixed::operator--(void)
{
	--value;
	return (*this);
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

Fixed	&Fixed::min(Fixed &o1, Fixed &o2)
{
	if (o1 < o2)
		return (o1);
	else
		return (o2);
}

Fixed const	&Fixed::min(Fixed const &o1, Fixed const &o2)
{
	if (o1 < o2)
		return (o1);
	else
		return (o2);
}

Fixed	&Fixed::max(Fixed &o1, Fixed &o2)
{
	if (o1 > o2)
		return (o1);
	else
		return (o2);
}

Fixed const	&Fixed::max(Fixed const &o1, Fixed const &o2)
{
	if (o1 > o2)
		return (o1);
	else
		return (o2);
}

std::ostream	&operator<<(std::ostream &o, Fixed const &f)
{
	o << f.toFloat();
	return (o);
}
