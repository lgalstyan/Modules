#ifndef WEAPON_HPP
#define WEAPON_HPP
#include <iostream>

class Weapon
{
    public:
        Weapon();
        Weapon(std::string a);
        ~Weapon();
        const std::string& getType();
        void setType(std::string t);
    private:
        std::string _type;
};

#endif