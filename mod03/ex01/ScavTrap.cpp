#include "ScavTrap.hpp"

// ScavTrap::ScavTrap(){}

ScavTrap::ScavTrap(std::string name)
{
    _name = name;
    _hit = 100;
    _energy =50;
    _damage = 20;
    std::cout   << "Hi. I am " << _name
                << " ScavTrap.\nI can atteck, to take demage and be repaired.\n";
}

ScavTrap::~ScavTrap()
{
    std::cout << BLUE << "A ClapTrap named "<< _name << " killed\n" << RESET;
}

void ScavTrap::attack(const std::string& target)
{
    if (_hit < 1)
    {
        std::cout << "ScavTrap " << _name << " hasn't hit point\n";
    }
    std::cout   << "ScavTrap " << _name << " attacks " << target
                << ", causing "<<_damage << " points of damage!\n";
    if (_hit >= 0)
        --_hit;
}
