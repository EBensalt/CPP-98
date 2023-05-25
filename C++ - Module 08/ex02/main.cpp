/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebensalt <ebensalt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 14:58:11 by ebensalt          #+#    #+#             */
/*   Updated: 2023/05/17 19:10:49 by ebensalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main()
{
	MutantStack<int>	m1;
	MutantStack<int>	m2;

	if (m1.empty())
		std::cout << "MutantStack m1 is empty!" << std::endl;
	m1.push(0);
	std::cout << "MutantStack m1 size is " << m1.size() << std::endl;
	m1.push(33);
	std::cout << "the last element inserted into MutantStack m1 is " << m1.top() << std::endl;
	m1.pop();
	std::cout << "the last element inserted into MutantStack m1 is " << m1.top() << std::endl;
	m1.push(48);
	m1.push(-4);
	m1.push(90);
	m2.push(-8);
	m2.push(-47);
	m2.push(18);
	m2.push(-92);
	m2.push(85);
	std::cout << "MutantStack m1 size is " << m1.size() << std::endl;
	std::cout << "MutantStack m2 size is " << m2.size() << std::endl;
	m1.swap(m2);
	std::cout << "MutantStack m1 size is " << m1.size() << std::endl;
	std::cout << "MutantStack m2 size is " << m2.size() << std::endl;
	std::cout << "MutantStack m1 content " << std::endl;
	for (MutantStack<int>::iterator it = m1.begin(); it != m1.end(); it++)
		std::cout << *it << std::endl;
	std::cout << "MutantStack m2 content " << std::endl;
	for (MutantStack<int>::iterator it = m2.begin(); it != m2.end(); it++)
		std::cout << *it << std::endl;
}
