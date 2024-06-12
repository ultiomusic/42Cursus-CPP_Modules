#include "ScalarConverter.hpp"

int main(int ac, char **av)
{
    if (ac != 2)
        return (1);

    std::string arg = av[1];
    ScalarConverter::findType(arg);
}