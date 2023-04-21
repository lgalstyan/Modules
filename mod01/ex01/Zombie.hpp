#ifndef ZOMBIE_H
#define ZOMBIE_H

#define RED		"\033[31m"
#define RESET	"\033[0m"

#include <iostream>

class Zombie
{
    public:
        Zombie(std::string n);
        Zombie();
        ~Zombie();
        void announce(void);
        void setName(std::string name);
    private:
        std::string _name;
};
Zombie*    zombieHorde( int N, std::string name );

#endif