#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    ClapTrap Player1("Panda");
    ClapTrap Player2("Vozni");
    ClapTrap Player3("Aghves");
    ClapTrap Player11("Banana");
    ClapTrap Player22("Ananas");
    Player1.attack("Aghves");
    Player1.attack("Vozni");
    Player1.attack("Aghves");
    Player1.takeDamage(33);
    Player11.attack("Heya");
    Player22.attack("Bumbum");
    return (0);
}
