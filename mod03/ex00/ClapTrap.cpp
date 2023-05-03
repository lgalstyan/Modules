#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::name)
{
    _name = name;
    _hit = 10;
    _energy = 10;
    _demage = 0;
    std::cout << "ClapTrap created...\n";
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap deleted...\n";
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
    *this = other;
}

ClapTrap& operator= (const ClapTrap& rhs)
{
    std::cout << "Copy assignment operator called\n";
    if (this != &rhs)
    {
        _name = rhs.getName();
        _hit = rhs.getHit();
        _energy = rhs.getEnergy();
        _demage = rhs.getDemage();
    }
    return (*this);
}

void ClapTrap::attack(const std::string& target)
{
    std::cout   << "ClapTrap " << _name << " attacks " << target
                << ", causing "<<_demage << " points of damage!\n";
    if (_hit >= 0)
        --_hit;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    // std::cout   << "ClapTrap " << _name << " take damage " << target
    //             << ", causing "<<_demage << " points of damage!\n";
    _hit -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (amount < 1)
        return ;
    _energy += amount;
}

std::string ClapTrap::getName()
{
    return (_name);
}

unsigned int ClapTrap::getHit()
{
    return (_hit);
}

unsigned int ClapTrap::getEnergy()
{

}

unsigned int ClapTrap::getDemage()
{

}
