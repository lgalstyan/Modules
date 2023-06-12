#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("_clap_trap"), ScavTrap("ScavTrap"), FragTrap("FragTrap")
{
    _name = "Anonymous";
    _hit = 100;
    _energy = 50;
    _damage = 30;
    std::cout   << BLUE << "Hi. I am " << _name
                << " DiamondTrap.I can attack, to take demage and be repaired.\n" << RESET;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_trap"), ScavTrap("ScavTrap"), FragTrap("FragTrap")
{
    _name = name;
    ClapTrap::_name = name + "_clap_trap";
    _hit = 100;
    _energy = 50;
    _damage = 30;
    std::cout   << BLUE << "Hi. I am " << _name
                << " DiamondTrap.I can attack, to take demage and be repaired.\n" << RESET;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other)  : ClapTrap(other), ScavTrap(other), FragTrap(other)
{
    *this = other;
    std::cout << "Called copy constructor\n";
}   

DiamondTrap& DiamondTrap::operator=(const DiamondTrap &rhs)
{
    if (this != & rhs)
    {
        _name = rhs._name;
        _hit = rhs._hit;
        _energy = rhs._energy;
        _damage = rhs._damage;
    }
    return (*this);
}

DiamondTrap::~DiamondTrap()
{
    std::cout << RED << "A DiamondTrap named "<< _name << " killed\n" << RESET;
}

void DiamondTrap::whoAmI()
{
    std::cout << "DiamondTrap name: " << _name << std::endl;
    std::cout << "ClapTrap name: " << ClapTrap::_name << std::endl;
    std::cout << "HitPoints: " << _hit << std::endl;  
    std::cout << "EnergyPoint: " << _energy << std::endl;
    std::cout << "AttackDamage: " << _damage << std::endl;
}
