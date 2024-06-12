#include "Serializer.hpp"

Serializer::Serializer()
{
    std::cout << "Serializer class is called." << std::endl;
}

Serializer::Serializer(const Serializer &cpy)
{
    std::cout << "Serializer copy constructor called." << std::endl;
    *this = cpy;
}

Serializer &Serializer::operator = (const Serializer &cpy)
{
    std::cout << "Serializer copy assigment constructor called." << std::endl;
    (void)cpy;
    return (*this);
}

uintptr_t Serializer::serialize(Data* ptr)
{
    return (reinterpret_cast<uintptr_t>(ptr));
}

Data* Serializer::deserialize(uintptr_t raw)
{
    return (reinterpret_cast<Data*>(raw));
}

Serializer::~Serializer()
{
    std::cout << "Serializer destructor is called." << std::endl;
}