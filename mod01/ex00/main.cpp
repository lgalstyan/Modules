#include "Zombie.hpp"

int main()
{
    Zombie *zombie;
    zombie = newZombie("Other_zombie");
    zombie->announce();
    
    Zombie zomb1("Zomb1");
    // Zombie zomb2("Zomb2");
    // Zombie zomb3("Zomb3");
    zomb1.announce();
    // zomb2.announce();
    // zomb3.announce();
    randomChump("rand_zombie");
    delete zombie;

    return (0);
}