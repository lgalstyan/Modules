#include "Zombie.hpp"

Zombie* newZombie(std::string name)
{
    Zombie *deathless = new Zombie(name);
    return (deathless);
}