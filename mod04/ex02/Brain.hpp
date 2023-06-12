#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain
{
    public:
        Brain();
        Brain(const Brain &other);
        Brain& operator= (const Brain& rhs);
        ~Brain();
        // void set_idea(const std::string &idea);
        // void display_ideas();
    private:
        std::string _ideas[100];
};

#endif