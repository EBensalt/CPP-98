/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebensalt <ebensalt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 11:47:57 by ebensalt          #+#    #+#             */
/*   Updated: 2023/05/17 18:57:19 by ebensalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <deque>
#include <list>
#include <stack>

int	main(void)
{
	std::vector<char>	v;
	std::deque<int>		d;
	std::list<int>		l;

	v.push_back(-68);
	v.push_back(-76);
	v.push_back(69);
	d.push_back(19);
	d.push_back(-80);
	d.push_back(-39);
	l.push_back(49);
	l.push_back(41);
	l.push_back(-13);
	try
	{
		easyfind(l, -13);
		easyfind(v, -68);
		easyfind(d, -80);
		easyfind(v, 42);
	}
	catch (const char *s)
	{
		std::cout << s << std::endl;
	}
}
