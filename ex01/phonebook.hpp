#ifndef PHONBOOK_HPP
#define PHONBOOK_HPP
#include "contact.hpp"

class PhoneBook
{
    public:
        PhoneBook();
        ~PhoneBook();
        void    Add_contact(std::string input[5]);
        void    Search();
        Contact get_contact();
        Contact set_contact();
    private:
        int _index;
        Contact _contact[8];
};

#endif