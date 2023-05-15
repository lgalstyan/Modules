#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ScavTrap(), FragTrap()
{
    std::cout   << BLUE << "Hi. I am " << _name
                << " DiamondTrap.\nI can attack, to take demage and be repaired.\n" << RESET;
}

DiamondTrap::DiamondTrap(std::string name): ScavTrap(),  FragTrap()
{
    _name = name;
    std::cout   << BLUE << "Hi. I am " << _name
                << " DiamondTrap.\nI can attack, to take demage and be repaired.\n" << RESET;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other)
{
    *this = other;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap &rhs)
{
    if (this != & rhs)
    {
        ScavTrap::operator=(rhs);
        FragTrap::operator=(rhs);
    }
    return (*this);
}

DiamondTrap::~DiamondTrap()
{
    std::cout << RED << "A DiamondTrap named "<< _name << " killed\n" << RESET;
}

void DiamondTrap::whoAmI()
{
    std::cout << "My name is " << _name << " and my ClapTrap name is " << ClapTrap::getName() << std::endl;
}
