/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebensalt <ebensalt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 20:44:37 by ebensalt          #+#    #+#             */
/*   Updated: 2023/05/21 16:24:12 by ebensalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP
# include <stack>
# include <iostream>

class RPN
{
	private	:
		std::stack<double>	s;
		std::string		t;
	public	:
		RPN(void);
		RPN(const RPN &o);
		~RPN(void);

		RPN	&operator=(const RPN &o);

		bool	input_check(char *av);
		void	execute(void);
};

#endif
