#include "Bureaucrat.hpp"
#include "Intern.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main() {
    try {
		Intern someRandomIntern;
		AForm *robotomy_form = someRandomIntern.makeForm("robotomy request", "ekox");
		AForm *presidential_form = someRandomIntern.makeForm("presidential pardon", "paulx");
       
        std::cout << std::endl;
		Bureaucrat sonmezx("Sönmez", 23);

        std::cout << sonmezx << std::endl << std::endl;
        std::cout << *robotomy_form << std::endl;
        robotomy_form->beSigned(sonmezx);
        robotomy_form->execute(sonmezx);
        std::cout << std::endl;

        std::cout << *presidential_form << std::endl;
        presidential_form->beSigned(sonmezx);
        presidential_form->execute(sonmezx);
        std::cout << std::endl;
	}
	catch(const std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
}