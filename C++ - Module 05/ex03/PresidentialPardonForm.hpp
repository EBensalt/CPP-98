/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebensalt <ebensalt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 16:38:33 by ebensalt          #+#    #+#             */
/*   Updated: 2023/04/28 16:42:06 by ebensalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PresidentialPardonForm_HPP
# define PresidentialPardonForm_HPP
# include "AForm.hpp"

class Bureaucrat;

class PresidentialPardonForm	: public AForm
{
	private	:
		std::string	target;
	public	:
		PresidentialPardonForm(void);
		PresidentialPardonForm(const PresidentialPardonForm &o);
		~PresidentialPardonForm(void);
		PresidentialPardonForm(const std::string &t);
		
		PresidentialPardonForm	&operator=(const PresidentialPardonForm &o);

		std::string	getTarget(void) const;
		void		execute(Bureaucrat const &executor) const;
};

#endif