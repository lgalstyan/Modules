#include "Brain.hpp"

Brain::Brain()
{
    for (int i = 0; i < 100; i++)
    {
        _ideas[i] = "no_idea";
    }
    std::cout << "Called Brain's default constructor\n";
}

Brain::Brain(const Brain &other)
{
    
    std::cout << "Called Brain's copy constructor\n";
    for (int i = 0; i < 100; i++)
    {
        if (!other._ideas[i].empty())
        {
            _ideas[i] = other._ideas[i];
        }
    }
}

Brain& Brain::operator= (const Brain& rhs)
{
    std::cout << "Called Brain's copy assigment constructor\n";
    if (this != &rhs)
    {
        for (int i = 0; i < 100; i++)
        {
            if (!rhs._ideas[i].empty())
            {
                _ideas[i] = rhs._ideas[i];
            }
        }
    }
    return (*this);
}

Brain::~Brain()
{
    std::cout << "Called Brain's destructor\n";
}
