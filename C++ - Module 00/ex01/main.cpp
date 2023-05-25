/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebensalt <ebensalt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 17:47:23 by ebensalt          #+#    #+#             */
/*   Updated: 2023/03/19 21:15:41 by ebensalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main(void)
{
	std::string	cmd;
	PhoneBook	pb;

	while (1337)
	{
		std::cout << "$>PHONEBOOK ";
		std::getline(std::cin, cmd);
		if (std::cin.eof())
			return (0);
		if (!cmd.compare("ADD"))
			pb.add();
		else if (!cmd.compare("SEARCH"))
			pb.search();
		else if (!cmd.compare("EXIT"))
			exit(0);
		else if (!cmd.size())
			continue ;
		else
			std::cout << cmd << " : invalid command, please try \"ADD, SEARCH OR EXIT\"!" << std::endl;
	}
	return (0);
}
