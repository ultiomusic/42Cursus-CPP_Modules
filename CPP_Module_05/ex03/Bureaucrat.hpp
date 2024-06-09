#ifndef BUREUCRAT_HPP
#define BUREUCRAT_HPP

#include <iostream>
#include "AForm.hpp"

class AForm;

class Bureaucrat {
    private:
        const std::string name;
        int grade;
    public:
        Bureaucrat(const std::string name, int grade);

        std::string getName() const;
        int getGrade() const;
        void increment();
        void decrement();

        void signForm(AForm &f);
        void executeForm(AForm const &form);

        Bureaucrat(const Bureaucrat &cpy);
		Bureaucrat& operator = (Bureaucrat const &cpy);
        class GradeTooHighException : public std::exception {
            const char* what() const throw();
        };
        class GradeTooLowException : public std::exception {
            const char* what() const throw();
        };
        ~Bureaucrat();
};

std::ostream &operator << (std::ostream &output, const Bureaucrat &b);

#endif