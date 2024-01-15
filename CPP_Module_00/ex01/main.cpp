#include "PhoneBook.hpp"

int main(void)
{
	PhoneBook phone_book;
	Contact contact;
	std::cout << "Welcome to virtual Phone Book:" << std::endl;
	while (1)
	{
		std::string input;
		std::cout << std::endl << "Please Enter a command:: ADD | SEARCH | EXIT: ";
		std::getline(std::cin, input);
		if (input.empty())
			continue;
		if (input == "ADD")
			phone_book.add();
		else if (input == "SEARCH")
			phone_book.search();
		else if (input == "EXIT")
			return (0);
		else
			std::cout << "Please choose a correct command! :" << std::endl;
	}
}