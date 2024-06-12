#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <iomanip>
#include <sstream>

class ScalarConverter {
	public:
		ScalarConverter();
		ScalarConverter(const ScalarConverter &cpy);
		ScalarConverter &operator=(const ScalarConverter &cpy);
		static void findType(std::string &arg);
		~ScalarConverter();
};

void setType(const std::string &str);
void nanCases(const std::string str);
void castChar(std::string str);
void castInt(std::string str);
void castFloat(std::string str);
void castDouble(std::string str);
void nothingType();

#endif