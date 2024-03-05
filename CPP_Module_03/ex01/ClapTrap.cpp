#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    this->name = "name";
    this->hitPoints = 10;
    this->energyPoints = 10;
    this->attackDamage = 0;
    std::cout << "ClapTrap class created." << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
    this->name = name;
    this->hitPoints = 10;
    this->energyPoints = 10;
    this->attackDamage = 0;
    std::cout << "ClapTrap class that takes a name parameter has been created." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &cpy)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = cpy;
}

ClapTrap& ClapTrap::operator = (const ClapTrap &cpy)
{
    std::cout << "Copy assigment constructor called" << std::endl;
    this->name = cpy.name;
    this->energyPoints = cpy.energyPoints;
    this->attackDamage = cpy.attackDamage;
    this->hitPoints = cpy.hitPoints;
    return (*this);
}

void ClapTrap::attack(const std::string& target)
{
    if (this->energyPoints > 0 && this->hitPoints > 0)
    {
        std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->hitPoints << " points of damage!" << std::endl;
        this->energyPoints -= 1;
    } else
        std::cout << this->name << " has no energy or hit points left." << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->hitPoints > 0)
    {
        std::cout << this->name << " took " << amount << " points of damage." << std::endl;
        this->hitPoints -= amount;
    }
    else
        std::cout << this->name << " is already dead." << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->energyPoints > 0 && this->hitPoints > 0)
    {
        std::cout << this->name << " repaired itself and got " << amount << " points." << std::endl;
        this->hitPoints += amount;
        this->energyPoints -= 1;
    } else
        std::cout << this->name << " has no energy or hit points left." << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap class removed." << std::endl;
}