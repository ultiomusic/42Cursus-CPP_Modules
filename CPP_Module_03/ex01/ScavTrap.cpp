#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
    this->name = "name";
    this->hitPoints = 100;
    this->energyPoints = 50;
    this->attackDamage = 20;
    std::cout << "ScavTrap class created." << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
    this->name = name;
    this->hitPoints = 100;
    this->energyPoints = 50;
    this->attackDamage = 20;
    std::cout << "ScavTrap class that takes a name parameter has been created." << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &cpy) : ClapTrap(cpy.name)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = cpy;
}

ScavTrap& ScavTrap::operator = (const ScavTrap &cpy)
{
    std::cout << "Copy assigment constructor called" << std::endl;
    this->name = cpy.name;
    this->energyPoints = cpy.energyPoints;
    this->attackDamage = cpy.attackDamage;
    this->hitPoints = cpy.hitPoints;
    return (*this);
}

void ScavTrap::attack(const std::string& target)
{
    if (this->energyPoints > 0 && this->hitPoints > 0)
    {
        std::cout << "ScavTrap " << this->name << " attacks " << target << ", causing " << this->hitPoints << " points of damage!" << std::endl;
        this->energyPoints -= 1;
    } else
        std::cout << this->name << " has no energy or hit points left." << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << this->name << " is in gatekeeper mode." << std::endl;
}

ScavTrap::~ScavTrap(){
    std::cout << "ScavTrap class removed." << std::endl;
}