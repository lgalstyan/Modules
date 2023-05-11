#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
    _name = "Anonymous";
    _hit = 100;
    _energy = 50;
    _damage = 20;
    std::cout   << "Hi. I am " << _name
                << " ScavTrap.\nI can attack, to take demage and be repaired.\n";
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    _name = name;
    _hit = 100;
    _energy = 50;
    _damage = 20;
    std::cout   << "Hi. I am " << _name
                << " ScavTrap.\nI can attack, to take demage and be repaired.\n";
}

ScavTrap::~ScavTrap()
{
    std::cout << RED << "A ScavTrap named "<< _name << " killed\n" << RESET;
}

void ScavTrap::attack(const std::string& target)
{
    if (_energy < 1)
    {
        std::cout << "ScavTrap " << _name << " has no energy points for attack\n";
    }
    std::cout   << "ScavTrap " << _name << " attacks " << target
                << ", causing "<<_damage << " points of damage!\n";
    if (_energy > 0)
        --_energy;
}

void ScavTrap::guardGate() const
{
    std::cout << "ScavTrap " << _name << " is now in Gate keeper mode." << std::endl;
}
