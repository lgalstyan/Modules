#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    ClapTrap Player1("Panda");
    ScavTrap Player2;
    Player1.attack("Aghves");
    Player1.takeDamage(33);
    Player2.takeDamage(2);
    return (0);
}
