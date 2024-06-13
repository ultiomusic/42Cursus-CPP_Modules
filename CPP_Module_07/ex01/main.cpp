#include "iter.hpp"

template <typename T>
void f(T &t)
{
    t = t + 1;
}

int main()
{
    char str[] = "abcde";
    int arr[] = {1, 2, 3, 4};

    iter(str, 5, f);
    iter(arr, 4, f);

    for (int i= 0; i < 5 ; i++)
        std::cout << str[i];
    std::cout << std::endl;

    for (int i= 0; i < 4 ; i++)
        std::cout << arr[i];
    std::cout << std::endl;
}