#include "Span.hpp"

Span::Span() {
    this->len = 0;
}

Span::Span(unsigned int len) {
    this->len = len;
}

Span::Span(const Span &cpy) {
    if (this != &cpy) {
        this->len = cpy.len;
        this->vec = cpy.vec;
    }
}

Span &Span::operator = (Span const &cpy) {
    if (this != &cpy) {
        this->len = cpy.len;
        this->vec = cpy.vec;
    }
    return (*this);
}

void Span::addNumber(int nbr) {
    try {
        if (this->vec.size() != this->len)
            this->vec.push_back(nbr);
        else
            throw (std::runtime_error("There is no more space on the list!"));
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
}

int Span::shortestSpan() {
	unsigned int x = 0, y = 0;
	int minRange = 0;

	try {
		if (len < 2)
			throw (std::runtime_error("There are not enough arguments on the list!"));
		else {
				if ((vec[0] - vec[1]) < 0)
					minRange = (vec[0] - vec[1]) * -1;
				else
					minRange = (vec[0] - vec[1]);
		}
		for (x = 0; x < this->len; x++) {

			for (y = x + 1; y < this->len; y++) {
				int absoluteValue = 0;
				if ((vec[x] - vec[y]) < 0)
					absoluteValue = (vec[x] - vec[y]) * -1;
				else
					absoluteValue = (vec[x] - vec[y]);
				if (minRange > absoluteValue)
					minRange = absoluteValue;
			}
		}
		return (minRange);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	return (0);
}

int Span::longestSpan() {
	unsigned int x = 0, y = 0;
	int maxRange = 0;

	try {
		if (len < 2)
			throw (std::runtime_error("There are not enough arguments on the list!"));
		else {
				if ((vec[0] - vec[1]) < 0)
					maxRange = (vec[0] - vec[1]) * -1;
				else
					maxRange = (vec[0] - vec[1]);
		}
		for (x = 0; x < this->len; x++) {

			for (y = x; y < this->len; y++) {
				int absoluteValue = 0;
				if ((vec[x] - vec[y]) < 0)
					absoluteValue = (vec[x] - vec[y]) * -1;
				else
					absoluteValue = (vec[x] - vec[y]);
				if (maxRange < absoluteValue)
					maxRange = absoluteValue;
			}
		}
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	return (maxRange);
}

void Span::addMultipleNumbers(std::vector<int>::iterator begin, std::vector<int>::iterator last) {
	while (begin != last) {
		if (this->vec.size() > this->len)
			throw std::runtime_error("List range is overflowing.!");
		this->vec.push_back(*begin);
		begin++;
	}
}

Span::~Span() {}