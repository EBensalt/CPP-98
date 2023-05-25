/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebensalt <ebensalt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 15:26:23 by ebensalt          #+#    #+#             */
/*   Updated: 2023/05/16 21:32:33 by ebensalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP
# include <stack>
# include <iostream>

template<typename T, typename C = std::deque<T> >
class MutantStack : public std::stack<T, C>
{
	public	:
		MutantStack(void);
		MutantStack(const MutantStack &o);
		~MutantStack(void);
		
		MutantStack	&operator=(const MutantStack &o);
		
		typedef typename std::stack<T, C>::container_type::iterator	iterator;
		
		iterator	begin(void);
		iterator	end(void);
};

# include "MutantStack.tpp"
#endif
