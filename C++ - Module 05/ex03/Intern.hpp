/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebensalt <ebensalt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 16:20:37 by ebensalt          #+#    #+#             */
/*   Updated: 2023/04/29 17:00:35 by ebensalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

class Intern
{
	public	:
		Intern(void);
		Intern(const Intern &o);
		~Intern(void);

		Intern	&operator=(const Intern &o);
		
		AForm	*makeForm(const std::string &n, const std::string &t);
		AForm	*PresidentialPardon(const std::string &t);
		AForm	*RobotomyRequest(const std::string &t);
		AForm	*ShrubberyCreation(const std::string &t);
};

#endif
