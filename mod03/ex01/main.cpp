#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
   ScavTrap steve("Steve");

    // Call member functions to test
    steve.attack("enemy");
    steve.takeDamage(20);
    steve.beRepaired(10);
    steve.guardGate();
    return (0);
}
