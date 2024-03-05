#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "The animal class is called." << std::endl;
	this->type = "Empty";
}

Animal::Animal(const Animal &cpy)
{
	std::cout << "Animal copy constructor called." << std::endl;
	*this = cpy;
}

Animal& Animal::operator = (const Animal &cpy)
{
    std::cout << "Animal copy assigment constructor called." << std::endl;
    this->type = cpy.type;
    return(*this);
}

void Animal::makeSound() const
{
	std::cout << "There is nothing here..." << std::endl;
}

std::string Animal::getType() const
{
	return (this->type);
}

Animal::~Animal()
{
	std::cout << "The animal class has been destroyed." << std::endl;
}