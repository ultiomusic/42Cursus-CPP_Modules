#include "Zombie.hpp"

int main()
{
    Zombie *zombie = newZombie("Fako");
    zombie->announce();
    delete zombie;
    randomChump("Sönmez");
}