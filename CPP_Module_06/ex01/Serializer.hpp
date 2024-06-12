#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <stdint.h>
#include <iostream>

struct Data
{
    std::string name;
    int age;
};

class Serializer
{
    public:
        Serializer();
        Serializer(const Serializer &cpy);
        Serializer &operator=(const Serializer &cpy);

        static uintptr_t serialize(Data* ptr);
        static Data* deserialize(uintptr_t raw);

        ~Serializer();
};

#endif