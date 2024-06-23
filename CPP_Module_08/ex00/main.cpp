#include "easyfind.hpp"

int main()
{
    std::vector<int> vec;

    vec.push_back(26);
    vec.push_back(13);
    vec.push_back(12);
    vec.push_back(196);
    vec.push_back(1);
    vec.push_back(23);

    std::cout << *easyfind(vec, 23) << std::endl;
    
    try {
        std::cout << *easyfind(vec, 5) << std::endl;
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
}