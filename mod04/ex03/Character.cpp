#include "Character.hpp"

// Character::Character()
// {
//    for(int i = 0; i < 4; ++i)
//     {
//         array[i] = NULL;
//     } 
// }
std::string const & Character::getName()
{
    return (_name);
}
void Character::equip(AMateria* mat)
{
    for(int i = 0; i < 4; ++i)
    {
        if (array[i] == NULL)
        {
            array[i] = mat.clone();
            return ;
        }
    }
    std::cout << "Already filled\n";
}

void Character::unequip(int idx)
{
    if (idx < 0 || idx > 3)
    {
        std::cout << "[Error] Index must be range of [0, 4)\n";
        return ;
    }
    if (array[i] == NULL)
    {
        std::cout << "[Error] No materia are stored in that index\n";
        return ;
    }
}

void Character::use(int idx, ICharacter& target)
{
    if (idx >= 0 && idx < 4 && array[i] != NULL)
        array[i]->use(target);
}
// Character(const Character &other);
// Character& operator= (const Character& rhs);
Character::~Character()
{

}
