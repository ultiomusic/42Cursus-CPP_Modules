#include "Serializer.hpp"

int main()
{
    uintptr_t temp;
    Data    *data1 = new Data;

    data1->age = 23;
    data1->name = "Mucox";

    temp = Serializer::serialize(data1);
    std::cout << "Data 1-> " << data1 << std::endl;

    Data *data2 = Serializer::deserialize(temp);
    std::cout << "Data 2-> " << data2 << std::endl;
}