/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebensalt <ebensalt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 11:47:43 by ebensalt          #+#    #+#             */
/*   Updated: 2023/05/06 14:32:52 by ebensalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int	main(void)
{
	Data	ptr;
	Data	*r;
	
	ptr.c = 'M';
	ptr.s = "Mehdi";
	ptr.i = 42;
	ptr.d = 42.1337;
	std::cout << ptr.c << std::endl;
	std::cout << ptr.s << std::endl;
	std::cout << ptr.i << std::endl;
	std::cout << ptr.d << std::endl;
	std::cout << "-------" << std::endl;
	r = Serializer::deserialize(Serializer::serialize(&ptr));
	std::cout << r->c << std::endl;
	std::cout << r->s << std::endl;
	std::cout << r->i << std::endl;
	std::cout << r->d << std::endl;
}
