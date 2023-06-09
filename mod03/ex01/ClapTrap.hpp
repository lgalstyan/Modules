#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#define RED		"\033[31m"
#define RESET	"\033[0m"
#define BLUE	"\033[1;34m"

#include <iostream>

class ClapTrap
{
    public:
        ClapTrap();
        ClapTrap(std::string name);
        ClapTrap(const ClapTrap &other);
        ClapTrap& operator= (const ClapTrap& rhs);
        void  attack(const std::string& target);
        void  takeDamage(unsigned int amount);
        void  beRepaired(unsigned int amount);
        virtual ~ClapTrap();

    protected:
        std::string _name;
        unsigned int _hit;
        unsigned int _energy;
        unsigned int _damage;
};

#endif