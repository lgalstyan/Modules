#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
    _name = "Anonymous";
    _hit = 100;
    _energy = 50;
    _damage = 20;
    std::cout   << BLUE << "Hi. I am " << _name
                << " FragTrap.\nI can attack, to take demage and be repaired.\n" << RESET;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    _name = name;
    _hit = 100;
    _energy = 50;
    _damage = 20;
    std::cout   << BLUE << "Hi. I am " << _name
                << " FragTrap.\nI can attack, to take demage and be repaired.\n" << RESET;
}

FragTrap::FragTrap(const FragTrap &other)
{
    *this = other;
    std::cout << "Called copy constructor\n";
}

FragTrap& FragTrap::operator= (const FragTrap& rhs)
{
    if (this != &rhs)
    {
        _name = rhs._name;
        _hit = rhs._hit;
        _damage = rhs._damage;
        _energy = rhs._energy;
    }
    return (*this);
}

FragTrap::~FragTrap()
{
    std::cout << RED << "A FragTrap named "<< _name << " killed\n" << RESET;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << _name << " requests a positive high fives session!" << std::endl;
}
