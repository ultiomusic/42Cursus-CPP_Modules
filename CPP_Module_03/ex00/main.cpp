#include "ClapTrap.hpp"

int main() {
    ClapTrap ct1("FAKO");
    ClapTrap ct2("SONMEZ");
    ClapTrap ct3("KADIR");

    ct1.attack("SONMEZ");
    ct2.takeDamage(10000);
    
    ct1.attack("SONMEZ");
    ct2.takeDamage(10000);

    ct3.beRepaired(1);
    ct3.takeDamage(100);
    ct3.takeDamage(120);
}