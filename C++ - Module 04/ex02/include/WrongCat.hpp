#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP
# include "WrongAnimal.hpp"

class	WrongCat	: public WrongAnimal
{
	public		:
		WrongCat(void);
		WrongCat(const WrongCat &o);
		~WrongCat(void);

		WrongCat	&operator=(const WrongCat &o);

		void	makeSound(void) const;
};

#endif
