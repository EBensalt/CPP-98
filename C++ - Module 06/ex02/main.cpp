/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebensalt <ebensalt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 15:30:49 by ebensalt          #+#    #+#             */
/*   Updated: 2023/05/06 16:20:10 by ebensalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ex02.hpp"

int	main(void)
{
	Base	*b;

	b = generate();
	identify(b);
	identify(*b);
	delete	b;
	b = generate();
	identify(b);
	identify(*b);
	delete	b;
	b = generate();
	identify(b);
	identify(*b);
	delete	b;
}
