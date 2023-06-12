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
    *this = other;
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

// void Brain::set_idea(const std::string &idea)
// {
//     for (int  i = 0; i < 3; ++i)
//         _ideas[i] = idea;
// }

// void Brain::display_ideas()
// {
//     for (int  i = 0; i < 3; ++i)
//         std::cout << _ideas[i] << "\n";
// }