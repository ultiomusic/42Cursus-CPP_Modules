#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called." << std::endl;
    this->value = 0;
}

Fixed::Fixed(const int newValue)
{
    std::cout << "Int constructor called." << std::endl;
    this->value = newValue << this->fixed;
}

Fixed::Fixed(const float newValue)
{
    std::cout << "Float constructor called." << std::endl;
    this->value = (int)roundf(newValue * pow(2, this->fixed));
}

Fixed::Fixed(const Fixed &cpy)
{
    std::cout << "Copy constructor called." << std::endl;
    *this = cpy;
}

Fixed &Fixed::min(Fixed &f1, Fixed &f2)
{
    return ((f1.value > f2.value) ? f2 : f1);
}

Fixed &Fixed::max(Fixed &f1, Fixed &f2)
{
    return ((f1.value > f2.value) ? f1 : f2);
}

const Fixed& Fixed::min(const Fixed &f1, const Fixed &f2)
{
    return ((f1.value > f2.value) ? f2 : f1);
}

const Fixed& Fixed::max(const Fixed &f1, const Fixed &f2)
{
    return ((f1.value > f2.value) ? f1 : f2);
}

Fixed& Fixed::operator = (const Fixed &cpy)
{
    if (this == &cpy)
        return (*this);
    std::cout << "Copy assignment operator called." << std::endl;
    this->setRawBits(cpy.value);
    return (*this);
}

bool Fixed::operator > (const Fixed &f) const
{
    return (this->value > f.value);
}

bool Fixed::operator >= (const Fixed &f) const
{
    return (this->value >= f.value);
}

bool Fixed::operator < (const Fixed &f) const
{
    return (this->value < f.value);
}

bool Fixed::operator <= (const Fixed &f) const
{
    return (this->value <= f.value);
}

bool Fixed::operator == (const Fixed &f) const 
{
    return (this->value == f.value);
}

bool Fixed::operator != (const Fixed &f) const
{
    return (this->value != f.value);
}

float Fixed::operator + (const Fixed &f) const
{
    return (this->toFloat() + f.toFloat());
}

float Fixed::operator - (const Fixed &f) const
{
    return (this->toFloat() - f.toFloat());
}

float Fixed::operator * (const Fixed &f) const
{
    return (this->toFloat() * f.toFloat());
}

float Fixed::operator / (const Fixed &f) const
{
    return (this->toFloat() / f.toFloat());
}

Fixed &Fixed::operator++()
{
    this->value++;
    return (*this);
}

Fixed Fixed::operator++(int)
{
    Fixed tmp = *this;
    this->value++;
    return (tmp);
}

Fixed &Fixed::operator--()
{
    this->value--;
    return (*this);
}

Fixed Fixed::operator--(int)
{
    Fixed tmp = *this;
    this->value--;
    return (tmp);
}

int Fixed::toInt(void) const
{
    return ((int)this->value >> this->fixed);
}

float Fixed::toFloat(void) const
{
    return ((float)this->value / (1 << this->fixed));
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

std::ostream &operator << (std::ostream &output, const Fixed &fixed)
{
    output << fixed.toFloat();
    return output;
} 