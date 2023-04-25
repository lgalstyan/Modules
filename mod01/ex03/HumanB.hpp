#ifndef HUMANB_HPP
#define HUMANB_HPP
#include "Weapon.hpp"

class HumanB
{
    public:
        HumanB(std::string name);
        HumanB();
        ~HumanB();
        void attack();
        void setWeapon(Weapon &w);

    private:
        Weapon      *_weapon_type;
        std::string _name;
};

#endif