#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal
{
	private:
		Brain *brain;
	public:
		Dog();
		Dog(const Dog &cpy);
		Dog &operator = (const Dog &cpy);
		void makeSound() const;
		~Dog();
};

#endif