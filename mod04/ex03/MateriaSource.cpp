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
    // for(int i = 0; i < 4; ++i)
    // {
    //     delete array[i];
    //     array[i] = NULL;
    // }
     for(int i = 0; i < 4; i++)
    {
        if (array[i] != NULL)
            delete array[i];
        array[i] = 0;
    }
}

MateriaSource::MateriaSource(const MateriaSource& op)
{
    *this = op;
}


MateriaSource& MateriaSource::operator=(const MateriaSource& op)
{
    if (this != &op)
    {
        for(int i = 0; i < 4; i++)
        {
            if (array[i] != NULL)
                delete array[i];
            array[i] = NULL;
        }
        for(int i = 0; i < 4 && op.array[i]; i++)
            array[i] = op.array[i]->clone();
    }
    return (*this);
}

void MateriaSource::learnMateria(AMateria* mat)
{
    for(int i = 0; i < 4; ++i)
    {
        if (array[i] == NULL)
        {
            array[i] = mat->clone();
            return ;
        }
    }
    std::cout << "Already filled\n";
    return ;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
    for(int i = 0; i < 4; ++i)
    {
        if (array[i] != NULL && array[i]->getType() == type)
        {
            return (array[i]->clone());
        }
    }
    return (0);
}
