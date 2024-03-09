#include "Dog.hpp"

Dog::Dog()
{
	this->type = "Dog";
	std::cout << "The dog class is called." << std::endl;
	this->brain = new Brain();
}

Dog::Dog(const Dog &cpy) :Animal()
{
	std::cout << "Dog copy constructor called." << std::endl;
	*this = cpy;
}

Dog& Dog::operator = (const Dog &cpy)
{
    std::cout << "Dog copy assigment constructor called." << std::endl;
    if (this != &cpy) {
    	this->type = cpy.type;
		this->brain = new Brain(*cpy.brain);
	}
    return(*this);
}

void Dog::makeSound() const
{
	std::cout << "woof, woof." << std::endl;
}

Dog::~Dog()
{
	std::cout << "The dog class has been destroyed." << std::endl;
	delete this->brain;
}