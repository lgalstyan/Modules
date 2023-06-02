#include "Zombie.hpp"

int main()
{
    Zombie *zombie;
    zombie = newZombie("Other_zombie");
    zombie->announce();
    
    Zombie zomb1("Zomb1");
    zomb1.announce();

    randomChump("rand_zombie");
    delete zombie;

    return (0);
}