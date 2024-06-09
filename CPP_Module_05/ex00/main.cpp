
#include "Bureaucrat.hpp"

int main()
{
    Bureaucrat sonmezx("Sönmez", 1);
    Bureaucrat ekox("Eko", 1);
    Bureaucrat paulx("Paul", 151);
    Bureaucrat bot1("Bot1", 0);
    Bureaucrat bot2("Bot2", -12);
    
    std::cout << "----------" << std::endl;
    std::cout << sonmezx.getName() << " - " << sonmezx.getGrade() << std::endl;
    std::cout << std::endl;

    ekox.increment();
    sonmezx.decrement();
    std::cout << ekox << std::endl;
    std::cout << sonmezx << std::endl;
    std::cout << "----------" << std::endl;
}
