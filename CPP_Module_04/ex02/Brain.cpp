#include "Brain.hpp"

Brain::Brain() {
	std::cout << "Brain constructor is called." << std::endl;	
}

Brain::Brain(const Brain &cpy) {
	std::cout << "Brain copy constructor is called." << std::endl;	
	*this = cpy;
}

Brain& Brain::operator=(const Brain &cpy) {
	std::cout << "Brain copy assigment constructor is called." << std::endl;	
	for (int i = 0; i < 100; i++)
		this->ideas[i] = cpy.ideas[i];
	return (*this);
}

Brain::~Brain() {
	std::cout << "Brain destructor is called." << std::endl;	
}