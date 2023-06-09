#ifndef ZOMBIE_H
#define ZOMBIE_H

#define RED		"\033[31m"
#define RESET	"\033[0m"

#include <iostream>

class Zombie
{
    public:
        Zombie(std::string n);
        ~Zombie();
        void announce(void);
    private:
        std::string _name;
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif