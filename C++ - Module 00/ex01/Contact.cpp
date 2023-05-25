/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebensalt <ebensalt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 17:46:52 by ebensalt          #+#    #+#             */
/*   Updated: 2023/03/19 21:16:24 by ebensalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact() {}

Contact::Contact(std::string cfn, std::string cln, std::string cnn, std::string cpn, std::string cds) :
	fn(cfn), ln(cln), nn(cnn), pn(cpn), ds(cds) {}

void	Contact::print(void)
{
	std::cout << "first name     : " << fn << std::endl; 
	std::cout << "last name      : " << ln << std::endl;
	std::cout << "nickname       : " << nn << std::endl;
	std::cout << "phone number   : " << pn << std::endl;
	std::cout << "darkest secret : " << ds << std::endl;
}

int	Contact::print(int index)
{
	if (!(fn == ""))
	{
		std::cout << index << "|"; 
		if (fn.size() < 11)
			std::cout << std::setw(10) << fn.substr(0, 10);
		else
			std::cout << std::setw(9) << fn.substr(0, 9) << ".";
		std::cout << "|";
		if (ln.size() < 11) 
			std::cout << std::setw(10) << ln.substr(0, 10);
		else
			std::cout << std::setw(9) << ln.substr(0, 9) << ".";
		std::cout << "|";
		if (nn.size() < 11)
			std::cout << std::setw(10) << nn.substr(0, 10);
		else
			std::cout << std::setw(9) << nn.substr(0, 9) << ".";
		std::cout << "|" << std::endl;
		return (0);
	}
	return (1);
}
