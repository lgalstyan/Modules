#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    _name = "Anonymous";
    _hit = 10;
    _energy = 10;
    _damage = 0;
    std::cout   << "Hi.I am " << _name
                << " ClapTrap.I can attack, to take demage and be repaired.\n";
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hit(10), _energy(10), _damage(0)
{
    std::cout   << "Hi.I am " << _name
                << " ClapTrap. I can attack, to take demage and be repaired.\n";
}

ClapTrap::~ClapTrap()
{
    std::cout << RED << "A ClapTrap named "<< _name << " killed\n" << RESET;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
    std::cout << "Called copy constructor\n";
    *this = other;
}

ClapTrap& ClapTrap::operator= (const ClapTrap& rhs)
{
    std::cout << "Copy assignment operator called\n";
    if (this != &rhs)
    {
        _name = rhs._name;
        _hit = rhs._hit;
        _energy = rhs._energy;
        _damage = rhs._damage;
    }
    return (*this);
}

void ClapTrap::attack(const std::string& target)
{
    if (_energy < 1)
    {
        std::cout << "ClapTrap " << _name << " has no energy points for attack\n";
        return ;
    }
    std::cout   << "ClapTrap " << _name << " attacks " << target
                << ", causing "<<_damage << " points of damage!\n";
    if (_energy > 0)
        --_energy;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (_hit < amount)
    {
        _hit = 0;
        std::cout << "ClapTrap hasn't hit point.";
    }
    std::cout   << "ClapTrap named " << _name
                << " takes " << amount << " damage\n";
    _hit -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (_energy < 1)
    {
        std::cout   << "The ClapTrap named " << _name
                    << "has no energy points\n";
        return ;
    }
    _hit += amount;
    _energy--;
    std::cout   << "The ClapTrap named " << _name
                << "is repaired for "
                << amount << " hit points\n";
}
