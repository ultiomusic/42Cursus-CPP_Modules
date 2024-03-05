#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	this->type = "Cat";
	std::cout << "The WrongCat class is called." << std::endl;
}

WrongCat::WrongCat(const WrongCat &cpy)
{
	std::cout << "WrongCat copy constructor called." << std::endl;
	*this = cpy;
}

WrongCat& WrongCat::operator = (const WrongCat &cpy)
{
    std::cout << "WrongCat copy assigment constructor called." << std::endl;
    this->type = cpy.type;
    return(*this);
}

void WrongCat::makeSound() const
{
	std::cout << "meow, meow." << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "The cat class has been destroyed." << std::endl;
}