#ifndef HUMANA_HPP
#define HUMANA_HPP
#include "Weapon.hpp"

class HumanA
{
    public:
        HumanA(std::string name, Weapon &type);
        HumanA();
        ~HumanA();
        void attack();

    private:
        Weapon* _weapon_type;
        std::string _name;
};
#endif