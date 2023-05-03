#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
    public:
        ClapTrap(std::string name);
        ClapTrap(const ClapTrap &other);
        ClapTrap& operator= (const ClapTrap& rhs);
        ~ClapTrap();
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        std::string getName();
        unsigned int getHit();
        unsigned int getEnergy();
        unsigned int getDemage();

    private:
        std::string _name;
        unsigned int _hit;
        unsigned int _energy;
        unsigned int _demage;
};

#endif