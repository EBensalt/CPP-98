/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebensalt <ebensalt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 21:04:52 by ebensalt          #+#    #+#             */
/*   Updated: 2023/04/09 01:23:46 by ebensalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Animal.hpp"
#include "../include/Cat.hpp"
#include "../include/Dog.hpp"
#include "../include/WrongAnimal.hpp"
#include "../include/WrongCat.hpp"
#include "../include/Brain.hpp"

int main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	delete j;
	delete i;
	
	Animal	*a[6];
	for (int i = 0; i < 3; i++)
		a[i] = new Cat();
	for (int i = 3; i < 6; i++)
		a[i] = new Dog();
	for (int i = 0; i < 3; i++)
		delete a[i];
	for (int i = 3; i < 6; i++)
		delete a[i];
	return 0;
}
