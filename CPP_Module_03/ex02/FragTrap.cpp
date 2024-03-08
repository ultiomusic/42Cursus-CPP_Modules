#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
    this->name = "name";
    this->hitPoints = 100;
    this->energyPoints = 100;
    this->attackDamage = 30;
    std::cout << "FragTrap class created." << std::endl;
}

FragTrap::FragTrap(std::string name)
{
    this->name = name;
    this->hitPoints = 100;
    this->energyPoints = 100;
    this->attackDamage = 30;
    std::cout << "FragTrap class that takes a name parameter has been created." << std::endl;
}

FragTrap::FragTrap(const FragTrap &cpy) : ClapTrap(cpy.name)
{
    std::cout << "Copy constructor is called." << std::endl;
    this->energyPoints = cpy.energyPoints;
    this->attackDamage = cpy.attackDamage;
    this->hitPoints = cpy.hitPoints;
}

FragTrap &FragTrap::operator = (const FragTrap &cpy)
{
    std::cout << "Copy assignment constructor is called." << std::endl;
    ClapTrap::operator=(cpy);
    return (*this);
}

void FragTrap::highFivesGuys()
{
    std::cout << "FragTrap: Would you like a high five?" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap class removed." << std::endl;
}