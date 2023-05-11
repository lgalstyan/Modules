#include "FragTrap.hpp"

int main()
{
    FragTrap frank("Frank");

    // Call member functions to test
    frank.attack("enemy");
    frank.takeDamage(50);
    frank.beRepaired(15);
    frank.highFivesGuys();
    return (0);
}
