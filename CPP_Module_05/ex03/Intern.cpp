#include "Intern.hpp"

Intern::Intern() {}

Intern::Intern(const Intern &cpy) {
    *this = cpy;
}

Intern &Intern::operator = (const Intern &cpy) {
    (void)cpy;
    return (*this);
}

AForm *Intern::makeForm(const std::string form, const std::string target) {
    const std::string form_types[] = {"shrubbery creation", "robotomy request", "presidential pardon"};
    const int num_forms = sizeof(form_types) / sizeof(form_types[0]);

    for (int i = 0; i < num_forms; ++i) {
        if (form == form_types[i]) {
            switch (i)
            {
                case 0:
                    return new ShrubberyCreationForm(target);
                case 1:
                    return new RobotomyRequestForm(target);
                case 2:
                    return new PresidentialPardonForm(target);
            }
        }
    }
    throw Intern::UnknowForm();
}

const char* Intern::UnknowForm:: what() const throw() {
	return ("Unknown form name.");
}

Intern::~Intern() {}