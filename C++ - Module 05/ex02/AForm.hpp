/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebensalt <ebensalt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 15:44:33 by ebensalt          #+#    #+#             */
/*   Updated: 2023/04/27 15:11:32 by ebensalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP
# include <iostream>
# include <exception>

class Bureaucrat;

class AForm
{
	private	:
		const std::string	name;
		bool				signe;
		const int			s_grade;
		const int			e_grade;
	public	:
		AForm(void);
		AForm(const AForm &o);
		virtual ~AForm(void);
		AForm(const std::string n, const int sg, const int eg);
		
		AForm	&operator=(const AForm &o);
		
		const std::string	&getName(void) const;
		bool				getSigne(void) const;
		int					getS_grade(void) const;
		int					getE_grade(void) const;
		void				beSigned(Bureaucrat &o);
		void				setSigne(bool s);
		virtual void		execute(Bureaucrat const & executor) const = 0;
		
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
		class FormIsNotSigned		: public std::exception
		{
			public	:
				const char	*what(void) const throw();
		};
};

std::ostream	&operator<<(std::ostream &o, const AForm &f);

#endif