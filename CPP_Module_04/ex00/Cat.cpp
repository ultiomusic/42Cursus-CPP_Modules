#include "Cat.hpp"

Cat::Cat()
{
	this->type = "Cat";
	std::cout << "The cat class is called." << std::endl;
}

Cat::Cat(const Cat &cpy)
{
	std::cout << "Cat copy constructor called." << std::endl;
	*this = cpy;
}

Cat& Cat::operator = (const Cat &cpy)
{
    std::cout << "Cat copy assigment constructor called." << std::endl;
    this->type = cpy.type;
    return(*this);
}

void Cat::makeSound() const
{
	std::cout << "meow, meow." << std::endl;
}

Cat::~Cat()
{
	std::cout << "The cat class has been destroyed." << std::endl;
}