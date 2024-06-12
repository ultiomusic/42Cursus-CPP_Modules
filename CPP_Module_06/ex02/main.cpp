#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

int main()
{
    Base *newBase = generate();
    
    std::cout << "-- Pointer --" << std::endl;
    identify(newBase);

    std::cout << "-- Reference --" << std::endl;
    identify(*newBase);
}