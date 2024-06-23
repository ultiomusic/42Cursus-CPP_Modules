#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>

template<typename T>
class MutantStack : public std::stack<T> {
    public:
        typedef typename std::stack<T>::container_type::iterator iterator;
        MutantStack() : std::stack<T>() {};
        MutantStack(const MutantStack &cpy) : std::stack<T>(cpy){}
        MutantStack &operator=(const MutantStack &cpy) {
            std::stack<T>::operator=(cpy);
            return (*this);
        }

        iterator begin() {
            return (std::stack<T>::c.begin());
        }
        iterator end() {
            return (std::stack<T>::c.end());
        }
        ~MutantStack(){}
};

#endif