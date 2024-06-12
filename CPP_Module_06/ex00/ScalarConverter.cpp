#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() { }

ScalarConverter::ScalarConverter(const ScalarConverter &cpy) { *this = cpy; }

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &cpy)
{ 
	(void)cpy;
	return (*this);
}

void ScalarConverter::findType(std::string &arg)
{
	if (arg == "nan" || arg == "nanf" || arg == "+inf" 
		|| arg == "-inf" || arg == "+inff" || arg == "-inff")
		nanCases(arg);
	else
		setType(arg);
}

void nanCases(const std::string str)
{
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	if (str == "nanf") {
		std::cout << "float: " << str << std::endl;
		std::cout << "double: nan" << std::endl;
	} else if (str == "-inff") {
		std::cout << "float: " << str << std::endl;
		std::cout << "double: -inf" << std::endl;
	} else if (str == "+inff") {
		std::cout << "float: " << str << std::endl;
		std::cout << "double: +inf" << std::endl;
	} else {
		std::cout << "float: " << str << "f" << std::endl;
		std::cout << "double: " << str << std::endl;
	}
}

void setType(const std::string& str)
{
	char type = 'i', flag = 0;
	std::strtod(str.c_str(), NULL);
	if (!std::isdigit(str.c_str()[0]) && str.length() == 1){
		castChar(str);
		return;
	}
	size_t i = 0;
	if (str[i] == '+' || str[i] == '-')
		i++;
	for (;str[i];i++){
		if ((i == (str.length() - 1)) && str[i] == 'f'){
			if (type != 'x') {
				castFloat(str);
				return;
			}
			return nothingType();
		}
		else if (str[i] == '.' && flag == 0){
			type = 'd';
			flag = 1;
		}
		else if (!std::isdigit(str[i]))
			type = 'x';
	}
	switch (type)
	{
	case 'x':
		nothingType();
		break;
	case 'd':
		castDouble(str);
		break;
	case 'i':
		castInt(str);
		break;
	default:
		break;
	}
	return;
}

void castChar(std::string str)
{
	int n = 0;
	double d = static_cast<double>(str[n]);
	int i = static_cast<int>(str[n]);
	float f = static_cast<float>(str[n]);
	if (str[n] >= 32 && str[n] <= 127)
	{
		std::cout << "char: " << "'" << str << "'" << std::endl;
		std::cout << "int: " << i << std::endl;
		std::cout << "float: " << std::fixed << std::setprecision(1) << f << "f" << std::endl;
		std::cout << "double: " << std::fixed << std::setprecision(1) << d << std::endl;
	}
	else
	{
		std::cout << "This character aren't printable" << std::endl;
	}
}

void castInt(std::string str)
{
	std::stringstream stream(str);

	int value = static_cast<int>(std::strtod(str.c_str(), NULL));
	char c = static_cast<char>(value);
	float f = static_cast<float>(value);
	double d = static_cast<double>(value);
	if (value >= 32 && value <= 126)
		std::cout << "char: " << "'" << c << "'"<< std::endl;
	else
		std::cout << "char: Non displayable" << std::endl;
	std::cout << "int: " << value << std::endl;
	std::cout << "float: " << std::fixed << std::setprecision(1) << f << "f" << std::endl;
	std::cout << "double: " << std::fixed << std::setprecision(1) << d << std::endl;
}

void castFloat(std::string str)
{
	std::stringstream stream(str);
	float value = static_cast<float>(std::strtod(str.c_str(), NULL));
	char c = static_cast<char>(value);
	int i = static_cast<int>(value);
	double d = static_cast<double>(value);

	if (value >= 32 && value <= 126)
		std::cout << "char: " << "'" << c << "'" << std::endl;
	else
		std::cout << "char: Non displayable" << std::endl;
	std::cout << "int: " << i << std::endl;
	std::cout << "float: " << std::fixed << std::setprecision(1) << value << "f" << std::endl;
	std::cout << "double: " << std::fixed << std::setprecision(1) << d << std::endl;
}

void castDouble(std::string str)
{
	std::stringstream stream(str);
	double value = static_cast<double>(std::strtod(str.c_str(), NULL));
	char c = static_cast<char>(value);
	int i = static_cast<int>(value);
	float f = static_cast<float>(value);

	if (value >= 32 && value <= 126)
		std::cout << "char: " << "'" << c << "'" << std::endl;
	else
		std::cout << "char: Non displayable" << std::endl;
	std::cout << "int: " << i << std::endl;
	std::cout << "float: " << std::fixed << std::setprecision(1) << f << "f" << std::endl;
	std::cout << "double: " << std::fixed << std::setprecision(1) << value << std::endl;
}

void nothingType()
{
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	std::cout << "float: impossible" << std::endl;
	std::cout << "double: impossible" << std::endl;
}

ScalarConverter::~ScalarConverter() { }