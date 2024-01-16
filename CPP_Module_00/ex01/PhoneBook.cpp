#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	this->id = 0;
    this->max = 0;
}
int is_digit(std::string s)
{
    int i = -1;
    while(s[++i])
        if (!(s[i] >= '0' && s[i] <= '9'))
            return (0);
    return (1);
}
int strtoint(const std::string& str)
{
    int result = 0;
    int sign = 1;
    size_t i = 0;

    if (str[0] == '-')
	{
        sign = -1;
        i = 1;
    }

    for (; i < str.length(); ++i)
	{
        result = result * 10 + (str[i] - '0');
    }

    return sign * result;
}
void PhoneBook::add(void)
{
	std::string fn;
	std::string ln;
	std::string nn;
	std::string pn;
	std::string ds;
	while (1)
	{
		std::cout << "First Name: ";
		std::getline(std::cin, fn);
		if (fn.empty())
			continue;
		std::cout << "Last Name: ";
		std::getline(std::cin, ln);
		if (ln.empty())
			continue;
		std::cout << "Nick Name: ";
		std::getline(std::cin, nn);
		if (nn.empty())
			continue;
		std::cout << "Phone Number: ";
		std::getline(std::cin, pn);
        if (!is_digit(pn))
            continue;
		if (pn.empty())
			continue;
		std::cout <<"Darkest Secret: ";
		std::getline(std::cin, ds);
		if (ds.empty())
			continue;
		this->contacts[this->id++].set_contact(fn,ln,nn, pn, ds);
		if (this->id == 8)
			this->id = 0;
        this->max++;
		break;
	}
}

void PhoneBook::search(void)
{
	int 	index;
    std::string  input;
    std::cout << std::endl << "     index|      name|  lastname|  nickname|";
    std::cout << std::endl << "--------------------------------------------" << std::endl;
	for (int i = 0; i < this->max; i++)
	{
		std::cout << std::setw(10) << i << "|";
		if (this->contacts[i].get_first_name().length() > 9)
			std::cout << std::setw(10) << this->contacts[i].get_first_name().substr(0,9) + "." << "|";
		else
			std::cout << std::setw(10) << this->contacts[i].get_first_name() << "|";
		if (this->contacts[i].get_last_name().length() > 9)
			std::cout << std::setw(10) << this->contacts[i].get_last_name().substr(0,9) + "." << "|";
		else
			std::cout << std::setw(10) << this->contacts[i].get_last_name() << "|";
		if (this->contacts[i].get_nickname().length() > 9)
			std::cout << std::setw(10) << this->contacts[i].get_last_name().substr(0,9) + "." << "|" << std::endl;
		else
			std::cout << std::setw(10) << this->contacts[i].get_nickname() << "|" << std::endl;
	}
	while (1)
	{
		std::cout << "Please write index that you want to show." << std::endl;


        if (std::cin >> input)
		{
            if (!is_digit(input))
                continue;
            std::cin.ignore(1,'\n');
            index = strtoint(input);
            if (index >=0 && index <=7)
			{
				std::cout << "index|name|surname|nickname|phone_number|darkest_secret|" << std::endl;
				std::cout << "    " << index << "|   " << this->contacts[index].get_first_name() << "|      "\
				<< this->contacts[index].get_last_name() << "|       " << this->contacts[index].get_nickname() << "|           " \
				<< this->contacts[index].get_phone_number() << "|             " << this->contacts[index].get_darkest_secret() << "|" << std::endl;
				break;
			}
			else
				std::cout << "Invalid input. Please enter a valid index." << std::endl;
		}
		else
		{
            std::cout << "Invalid input. Please enter a valid index." << std::endl;
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        }
	}
}