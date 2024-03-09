#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <iostream>

class AAnimal
{
	protected:
		std::string type;
	public:
		AAnimal();
		AAnimal(const AAnimal &cpy);
		AAnimal &operator = (const AAnimal &cpy);
		virtual void	makeSound() const = 0;
		std::string getType() const;
		~AAnimal();
};

#endif