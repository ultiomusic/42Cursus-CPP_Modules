#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "The WrongAnimal class is called." << std::endl;
	this->type = "Empty";
}

WrongAnimal::WrongAnimal(const WrongAnimal &cpy)
{
	std::cout << "WrongAnimal copy constructor called." << std::endl;
	*this = cpy;
}

WrongAnimal& WrongAnimal::operator = (const WrongAnimal &cpy)
{
    std::cout << "WrongAnimal copy assigment constructor called." << std::endl;
    this->type = cpy.type;
    return(*this);
}

void WrongAnimal::makeSound() const
{
	std::cout << "There is nothing here..." << std::endl;
}

std::string WrongAnimal::getType() const
{
	return (this->type);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "The WrongAnimal class has been destroyed." << std::endl;
}