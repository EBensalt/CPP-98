/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebensalt <ebensalt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 06:25:43 by ebensalt          #+#    #+#             */
/*   Updated: 2023/04/06 05:32:10 by ebensalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
# include <cmath>

class	Fixed
{
	private	:
		int					value;
		static const int	fractional;
	public	:
		Fixed(void);
		Fixed(const int i);
		Fixed(const float f);
		Fixed(const Fixed &o);
		~Fixed(void);

		Fixed	&operator=(const Fixed &o);
		bool	operator>(const Fixed &o) const;
		bool	operator<(const Fixed &o) const;
		bool	operator>=(const Fixed &o) const;
		bool	operator<=(const Fixed &o) const;
		bool	operator==(const Fixed &o) const;
		bool	operator!=(const Fixed &o) const;
		Fixed	operator+(const Fixed &o) const;
		Fixed	operator-(const Fixed &o) const;
		Fixed	operator*(const Fixed &o) const;
		Fixed	operator/(const Fixed &o) const;
		Fixed	operator++(int);
		Fixed	&operator++(void);
		Fixed	operator--(int);
		Fixed	&operator--(void);

		int					getRawBits(void) const;
		void				setRawBits(int const raw);
		float				toFloat(void) const;
		int					toInt(void) const;
		static Fixed		&min(Fixed &o1, Fixed &o2);
		static Fixed const	&min(Fixed const &o1, Fixed const &o2);
		static Fixed		&max(Fixed &o1, Fixed &o2);
		static Fixed const	&max(Fixed const &o1, Fixed const &o2);
};

std::ostream	&operator<<(std::ostream &o, Fixed const &f);

#endif
