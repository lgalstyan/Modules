#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#define RED		"\033[31m"
#define RESET	"\033[0m"

#include <iostream>

class ClapTrap
{
    public:
        ClapTrap();
        ClapTrap(std::string name);
        ClapTrap(const ClapTrap &other);
        ClapTrap& operator= (const ClapTrap& rhs);
        ~ClapTrap();
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);

    private:
        std::string _name;
        unsigned int _hit;
        unsigned int _energy;
        unsigned int _damage;
};

#endif