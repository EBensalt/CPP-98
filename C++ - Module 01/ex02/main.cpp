/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebensalt <ebensalt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 06:33:07 by ebensalt          #+#    #+#             */
/*   Updated: 2023/03/28 22:14:17 by ebensalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string	string = "HI THIS IS BRAIN";
	std::string	*stringPTR = &string;
	std::string	&stringREF = string;
	
	std::cout << "memory address :" << std::endl;
	std::cout << "string    :" << &string << std::endl;
	std::cout << "stringPTR :" << stringPTR << std::endl;
	std::cout << "stringREF :" << &stringREF << std::endl;
	std::cout << "-------------------------" << std::endl;
	std::cout << "value :" << std::endl;
	std::cout << "string    : " << string << std::endl;
	std::cout << "stringPTR : " << *stringPTR << std::endl;
	std::cout << "stringREF : " << stringREF << std::endl;
}
