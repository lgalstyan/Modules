#include "ClapTrap.hpp"

int main()
{
    ClapTrap Player1("Panda");
    ClapTrap Player2("Vozni");
    ClapTrap Player3("Aghves");
    Player1.attack("Aghves");
    Player1.attack("Vozni");
    Player1.attack("Aghves");
    Player1.takeDamage(33);
    return (0);
}
