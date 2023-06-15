#include "Character.hpp"
#include "Ice.hpp"

Character::Character()
{
    _name = "undefine";
   for(int i = 0; i < 4; ++i)
    {
        array[i] = NULL;
    } 
    for(int i = 0; i < 4; ++i)
    {
        array_on_floor[i] = NULL;
    } 
}

Character::Character(std::string const & name)
{
    _name = name;
    for(int i = 0; i < 4; ++i)
    {
        array[i] = NULL;
    } 
    for(int i = 0; i < 4; ++i)
    {
        array_on_floor[i] = NULL;
    } 
}

Character::Character(const Character &other)
{
    std::cout << "Called Character's copy constructor\n";
    _name = other._name;
    for(int i = 0; i < 4; i++)
    {
        if (other.array[i])
            array[i] = other.array[i]->clone();
        if (other.array_on_floor[i])
            array_on_floor[i] = other.array_on_floor[i]->clone();
    }
}

Character& Character::operator= (const Character& rhs)
{
    std::cout << "Called Character's copy assigment constructor\n";
    if (this != &rhs)
    {
        for(int i = 0; i < 4; i++)
        {
            if (rhs.array[i])
                array[i] = rhs.array[i]->clone();
            if (rhs.array_on_floor[i])
                array_on_floor[i] = rhs.array_on_floor[i]->clone();
        }
    }
    return (*this);
}

std::string const & Character::getName() const
{
    return (_name);
}

void Character::equip(AMateria* mat)
{
    for(int i = 0; i < 4; ++i)
    {
        if ( array[i] == NULL)
        {
            // Ice *copy_ice = new Ice;
            array[i] = mat;
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
    if (array[idx] == NULL)
    {
        std::cout << "[Error] No materia are stored in that index\n";
        return ;
    }
    for(int  i = 0; i < 4; ++i)
    {
        if ( array_on_floor[i] == NULL)
        {
            array_on_floor[i] = array[idx];
            array[idx] = NULL;
            return ;
        }
    }
}

void Character::use(int idx, ICharacter& target)
{
    if (idx >= 0 && idx < 4 && array[idx] != NULL)
        array[idx]->use(target);
}

Character::~Character()
{}