#include "Cat.hpp"

Cat::Cat()
{
	this->type = "Cat";
	std::cout << "The cat class is called." << std::endl;
	this->brain = new Brain();
}

Cat::Cat(const Cat &cpy) :Animal()
{
	std::cout << "Cat copy constructor called." << std::endl;
	*this = cpy;
}

Cat& Cat::operator = (const Cat &cpy)
{
    std::cout << "Cat copy assigment constructor called." << std::endl;
	if (this != &cpy) {
    	this->type = cpy.type;
		this->brain = new Brain(*cpy.brain);
	}
    return(*this);
}

void Cat::makeSound() const
{
	std::cout << "meow, meow." << std::endl;
}

Cat::~Cat()
{
	std::cout << "The cat class has been destroyed." << std::endl;
	delete this->brain;
}