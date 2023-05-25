/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebensalt <ebensalt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 15:39:35 by ebensalt          #+#    #+#             */
/*   Updated: 2023/04/28 16:35:57 by ebensalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP
# include "AForm.hpp"
# include <fstream>

class Bureaucrat;

class ShrubberyCreationForm	: public AForm
{
	private	:
		std::string	target;
	public	:
		ShrubberyCreationForm(void);
		ShrubberyCreationForm(const ShrubberyCreationForm &o);
		~ShrubberyCreationForm(void);
		ShrubberyCreationForm(const std::string &t);
		
		ShrubberyCreationForm	&operator=(const ShrubberyCreationForm &o);

		std::string	getTarget(void) const;
		void		execute(Bureaucrat const &executor) const;
};

#endif