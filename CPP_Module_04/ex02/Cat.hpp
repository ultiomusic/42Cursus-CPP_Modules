#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal {
	private:
		Brain *brain;
	public:
		Cat();
		Cat(const Cat &cpy);
		Cat &operator = (const Cat &cpy);
		void makeSound() const;
		~Cat();
};

#endif