#include "ClapTrap.hpp"

int main()
{
    ClapTrap Player1("First");
    ClapTrap Player2("Second");
    Player1.attack("target1");
    Player1.attack("targe2");
    Player1.beRepaired(45);
    Player1.takeDamage(33);
    return (0);
}
