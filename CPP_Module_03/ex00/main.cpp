#include "ClapTrap.hpp"

int main() {
    ClapTrap cp1("NARUTO");
    ClapTrap cp2("LUFFY");
    ClapTrap cp3("FIKARME");

    cp1.attack("LUFFY");
    cp2.takeDamage(10000);
    
    cp1.attack("LUFFY");
    cp2.takeDamage(10000);

    cp3.beRepaired(1);
    cp3.takeDamage(100);
    cp3.takeDamage(120);
}