#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "AMateria.hpp"

class Character : public Character
{
    public: 
        Character();
        std::string const & getName();
        void equip(AMateria* m);
        void unequip(int idx);
        void use(int idx, ICharacter& target);
        // Character(const Character &other);
        // Character& operator= (const Character& rhs);
        ~Character();
    private:
        std::string _name;
        AMateria *array[4];
        AMateria *array_on_floor[4];
};

#endif