/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebensalt <ebensalt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 15:44:33 by ebensalt          #+#    #+#             */
/*   Updated: 2023/04/27 15:12:24 by ebensalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP
# include <iostream>
# include <exception>

class Bureaucrat;

class Form
{
	private	:
		const std::string	name;
		bool				signe;
		const int			s_grade;
		const int			e_grade;
	public	:
		Form(void);
		Form(const Form &o);
		~Form(void);
		Form(const std::string n, const int sg, const int eg);
		
		Form	&operator=(const Form &o);
		
		const std::string	&getName(void) const;
		bool				getSigne(void) const;
		int					getS_grade(void) const;
		int					getE_grade(void) const;
		void				beSigned(Bureaucrat &o);
		
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

std::ostream	&operator<<(std::ostream &o, const Form &f);

#endif