#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    Bureaucrat sonmezx("Sönmez", 1);
    Bureaucrat ekox("Eko", 1);
    Bureaucrat paulx("Paul", 151);
    Bureaucrat bot1("Bot1", 0);
    Bureaucrat bot2("Bot2", -12);

    
    std::cout << "----------" << std::endl;
    std::cout << sonmezx.getName() << " - " << sonmezx.getGrade() << std::endl;
    ekox.increment();
    sonmezx.decrement();
    std::cout << ekox << std::endl;
    std::cout << sonmezx << std::endl;
    std::cout << "----------" << std::endl << std::endl;


    std::cout << "----- FORM -----" << std::endl;
    Form a("A", 1, 4);
    Form b("B", 6, 9);
    std::cout << a << std::endl;
    std::cout << b << std::endl;

    sonmezx.signForm(a);
    ekox.signForm(a);
    ekox.signForm(a);
    std::cout << a.getIsSigned() << std::endl;
    std::cout << b.getIsSigned() << std::endl;
    std::cout << "----------" << std::endl << std::endl;
}