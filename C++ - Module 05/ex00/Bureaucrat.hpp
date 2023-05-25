/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebensalt <ebensalt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 10:18:10 by ebensalt          #+#    #+#             */
/*   Updated: 2023/04/26 12:18:01 by ebensalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# include <iostream>
# include <exception>

class Bureaucrat
{
	private	:
		const std::string	name;
		int					grade;
	public	:
		Bureaucrat(void);
		Bureaucrat(const Bureaucrat &o);
		~Bureaucrat(void);
		Bureaucrat(const std::string &n, int g);
		
		Bureaucrat	&operator=(const Bureaucrat &o);
		
		const std::string	&getName(void) const;
		int					getGrade(void) const;
		void				increment(void);
		void				decrement(void);
		
		class GradeTooHighException	: public std::exception
		{
			public	:
				const char	*what(void) const throw();
		};
		class GradeTooLowException	: public std::exception
		{
			public	:
				const char	*what(void) const throw();
		};
};

std::ostream	&operator<<(std::ostream &o, const Bureaucrat &b);

#endif
