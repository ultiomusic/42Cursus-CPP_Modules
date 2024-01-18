#include "Harl.hpp"

int main()
{
    Harl harl;
    std::string in;

    while (1)
    {
        std::cout <<  "Enter a level: ";
        getline(std::cin, in);
        if(in != "WARNING" && in != "DEBUG" && in != "INFO" && in != "EXIT")
        {
            std::cout << "Error: Invalid level! Please enter DEBUG, INFO, WARNING, or EXIT." << std::endl;
            continue;
        }
        if(in.empty())
            continue;
        if(in == "EXIT")
            break;
        harl.complain(in);
    }
    return (0);    
}