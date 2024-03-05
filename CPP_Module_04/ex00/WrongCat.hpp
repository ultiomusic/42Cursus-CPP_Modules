#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include <iostream>
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public:
		WrongCat();
		WrongCat(const WrongCat &cpy);
		WrongCat &operator = (const WrongCat &cpy);
		void makeSound() const;
		~WrongCat();
};

#endif