/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebensalt <ebensalt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 17:45:58 by ebensalt          #+#    #+#             */
/*   Updated: 2023/03/19 21:16:51 by ebensalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : i(0) {}

void	PhoneBook::add(void)
{
	std::string	fn;
	std::string	ln;
	std::string	nn;
	std::string	pn;
	std::string	ds;

	std::cout << "first name : ";
	std::getline(std::cin, fn);
	if (std::cin.eof())
		exit(0);
	for (int i = 0; fn[i]; i++)
		if (!isalpha(fn[i]) && !isspace(fn[i]))
		{
			std::cout << "invalid first name!" << std::endl;
			return ;
		}
	std::cout << "last name : ";
	std::getline(std::cin, ln);
	if (std::cin.eof())
		exit(0);
	for (int i = 0; ln[i]; i++)
		if (!isalpha(ln[i]) && !isspace(ln[i]))
		{
			std::cout << "invalid last name!" << std::endl;
			return ;
		}
	std::cout << "nickname : ";
	std::getline(std::cin, nn);
	if (std::cin.eof())
		exit(0);
	std::cout << "phone number : ";
	std::getline(std::cin, pn);
	if (std::cin.eof())
		exit(0);
	for (int i = 0; pn[i]; i++)
		if (!isdigit(pn[i]) && !isspace(pn[i]))
		{
			std::cout << "invalid phone number!" << std::endl;
			return ;
		}
	std::cout << "darkest secret : ";
	std::getline(std::cin, ds);
	if (std::cin.eof())
		exit(0);
	if (i > 7)
		i = 0;
	if (!fn.size() || !ln.size() || !nn.size() || !pn.size())
		std::cout << "incomplete contact, please try again!" << std::endl;
	else
	{
		c[i] = Contact(fn, ln, nn, pn, ds);
		i++;
	}
}

void	PhoneBook::search(void)
{
	int	search_cmd;

	std::cout << "X|" << std::setw(10) << "first name" << "|" << std::setw(10) << "last name" << "|" <<
		std::setw(10) << "nickname" << "|" << "\n-----------------------------------" << std::endl;
	for (int j = 0; j < 8; j++)
		if (c[j].print(j + 1) || j == 7)
		{
			if (j == 7)
				j++;
			std::cout << "enter an index for more info, or press \"9\" to exit the search menu." <<
				std::endl;
			std::cin >> search_cmd;
			if (std::cin.eof())
				exit(0);
			if (std::cin.fail() || search_cmd < 1 || search_cmd > 9)
			{
				std::cin.clear();
				std::cout << "error : invalid index!" << std::endl;
			}
			else if (search_cmd == 9)
				break ;
			else if (search_cmd > j)
				std::cout << "there is no contact on this index!" << std::endl;
			else
			{
				c[search_cmd - 1].print();
			}
			break ;
		}
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}
