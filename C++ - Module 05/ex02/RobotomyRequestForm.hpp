/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebensalt <ebensalt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 16:37:01 by ebensalt          #+#    #+#             */
/*   Updated: 2023/04/28 16:51:25 by ebensalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP
# include "AForm.hpp"
# include <cstdlib>

class Bureaucrat;

class RobotomyRequestForm	: public AForm
{
	private	:
		std::string	target;
	public	:
		RobotomyRequestForm(void);
		RobotomyRequestForm(const RobotomyRequestForm &o);
		~RobotomyRequestForm(void);
		RobotomyRequestForm(const std::string &t);
		
		RobotomyRequestForm	&operator=(const RobotomyRequestForm &o);

		std::string	getTarget(void) const;
		void		execute(Bureaucrat const &executor) const;
};

#endif