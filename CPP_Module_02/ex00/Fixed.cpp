#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called." << std::endl;
    this->value =  0;
}

Fixed::Fixed(const Fixed &cpy)
{
    std::cout << "Copy constructor called." << std::endl;
    *this = cpy;
}

Fixed& Fixed::operator = (const Fixed &cpy)
{
    if (this == &cpy)
        return (*this);
    std::cout << "Copy assignment operator called." << std::endl;
    this->setRawBits(cpy.getRawBits());
    return (*this);
}

int Fixed::getRawBits() const
{
    std::cout << "getRawBits member function called." << std::endl;
    return (this->value);
}

void Fixed::setRawBits(int const raw)
{
    this->value = raw;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called." << std::endl;
}