#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    for(int i = 0; i < 4; ++i)
    {
        array[i] = NULL;
    }
}

MateriaSource::~MateriaSource()
{
    for(int i = 0; i < 4; ++i)
    {
        delete array[i];
        array[i] = NULL;
    }
}

void MateriaSource::learnMateria(AMateria* mat)
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

AMateria* MateriaSource::createMateria(std::string const & type)
{
    for(int i = 0; i < 4; ++i)
    {
        if (array[i] != NULL && artray[i].getType() == type)
        {
            return (array[i].clone());
        }
    }
    return (0);
}
