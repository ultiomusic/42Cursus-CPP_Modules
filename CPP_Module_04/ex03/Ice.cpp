#include "Ice.hpp"

Ice::Ice(void) : AMateria("ice")
{
	std::cout << "Ice default constructor called" << std::endl;
}

Ice::Ice(const Ice& obj) : AMateria("ice")
{
	std::cout << "Ice copy constructor called" << std::endl;
	*this = obj;
}

Ice::~Ice(void)
{
	std::cout << "Ice destructor called" << std::endl;
}

Ice& Ice::operator=(const Ice& obj)
{
	(void)obj;
	return (*this);
}

Ice*	Ice::clone(void) const
{
	return (new Ice(*this));
}
