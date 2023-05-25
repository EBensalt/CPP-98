/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebensalt <ebensalt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 17:46:54 by ebensalt          #+#    #+#             */
/*   Updated: 2023/03/19 01:03:00 by ebensalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP
# include <iostream>
# include <iomanip>
# include <ctype.h>

class Contact
{
	private :
		std::string	fn;
		std::string	ln;
		std::string	nn;
		std::string	pn;
		std::string	ds;
	public :
		Contact();
		Contact(std::string cfn, std::string cln, std::string cnn, std::string cpn, std::string cds);
		void	print();
		int		print(int index);
};

#endif