#include "AAnimal.hpp"

AAnimal::AAnimal()
{
	std::cout << "The AAnimal class is called." << std::endl;
	this->type = "Empty";
}

AAnimal::AAnimal(const AAnimal &cpy)
{
	std::cout << "AAnimal copy constructor called." << std::endl;
	*this = cpy;
}

AAnimal& AAnimal::operator = (const AAnimal &cpy)
{
    std::cout << "AAnimal copy assigment constructor called." << std::endl;
    this->type = cpy.type;
    return(*this);
}

void AAnimal::makeSound() const
{
	std::cout << "There is nothing here..." << std::endl;
}

std::string AAnimal::getType() const
{
	return (this->type);
}

AAnimal::~AAnimal()
{
	std::cout << "The AAnimal class has been destroyed." << std::endl;
}