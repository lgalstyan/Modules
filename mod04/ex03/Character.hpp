#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Character : public ICharacter
{
    public: 
        Character();
        Character(const Character &other);
        Character& operator= (const Character& rhs);
        ~Character();
        
        Character(std::string const & name);
        std::string const & getName() const;
        void equip(AMateria* m);
        void unequip(int idx);
        void use(int idx, ICharacter& target);
    private:
        std::string _name;
        AMateria *array[4];
        AMateria *array_on_floor[4];
};

#endif