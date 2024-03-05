#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
	protected:
		std::string type;
	public:
		Animal();
		Animal(const Animal &cpy);
		Animal &operator = (const Animal &cpy);
		virtual void	makeSound() const = 0;
		std::string getType() const;
		~Animal();
};

#endif