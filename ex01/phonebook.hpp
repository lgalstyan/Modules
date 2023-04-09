#ifndef PHONBOOK_HPP
#define PHONBOOK_HPP
#include "contact.hpp"
#include <iostream>
#include <iomanip>

class PhoneBook
{
    public:
        PhoneBook();
        ~PhoneBook();
        void    Add_contact(std::string input[5]);
        void    Search_with_index(int i);
        void    Search();
        void    Exit();
        int     get_current_index();
        Contact get_contact();
        Contact set_contact();
    private:
        Contact _contact[8];
        int _index;
        int _count;
};

#endif