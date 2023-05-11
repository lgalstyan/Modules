#ifndef PHONBOOK_HPP
#define PHONBOOK_HPP

#define RED		"\033[31m"
#define RESET	"\033[0m"
#define BLUE	"\033[1;34m"

#include "contact.hpp"
#include <iostream>
#include <iomanip>
#include <cctype>

class PhoneBook
{
    public:
        PhoneBook();
        ~PhoneBook();
        void    Add_contact(std::string input[5]);
        void    Search_with_index(int i);
        bool    Search();
        void    Exit();
        int     get_current_index();
        int     get_count();
        Contact get_contact();
        Contact set_contact();
    private:
        Contact _contact[8];
        int _index;
        int _count;
};

#endif