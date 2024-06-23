#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <vector>
#include <stdexcept>

template<typename T>
typename T::iterator easyfind(T &containters, int number) {
    typename T::iterator i = std::find(containters.begin(), containters.end(), number);
    if (i == containters.end())
        throw (std::runtime_error("Not found!"));
    return (i);
}

#endif