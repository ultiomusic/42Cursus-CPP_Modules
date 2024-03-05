#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    public:
        ScavTrap();
        ScavTrap(std::string name);
        ScavTrap(const ScavTrap &cpy);
        ScavTrap &operator = (const ScavTrap &cpy);
        void attack(const std::string& target);
        void guardGate();
        ~ScavTrap();
};

#endif