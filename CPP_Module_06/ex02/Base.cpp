#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base::~Base() {};

Base *generate()
{
    Base *base;
    srand(time(NULL));
    int random_n = rand() % 3 + 1;

    if (random_n == 1)
        base = new A;
    else if (random_n == 2)
        base = new B;
    else
        base = new C;
    return (base);
}

void identify(Base *p)
{
    if (dynamic_cast<A*>(p) != 0)
        std::cout << "Type is A" << std::endl;
    else if (dynamic_cast<B*>(p) != 0)
        std::cout << "Type is B" << std::endl;
    else if (dynamic_cast<C*>(p) != 0)
        std::cout << "Type is C" << std::endl;
}

void identify(Base &p)
{
    try {
        A &a = dynamic_cast<A&>(p);
        std::cout << "Type is A" << std::endl;
        (void)a;
    }
    catch (std::exception &e) {}
    try {
        B &b = dynamic_cast<B&>(p);
        std::cout << "Type is B" << std::endl;
        (void)b;
    }
    catch (std::exception &e) {}
    try {
        C &c = dynamic_cast<C&>(p);
        std::cout << "Type is C" << std::endl;
        (void)c;
    }
    catch (std::exception &e) {}
}