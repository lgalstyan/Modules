#include "phonebook.hpp"

PhoneBook::PhoneBook()
{
    _index = 0;
}

PhoneBook::~PhoneBook(){}

void    PhoneBook::Search()
{
    
}

void    PhoneBook::Add_contact(std::string input[5])
{
    _contact[_index].set_first_name(input[0]);
    _contact[_index].set_last_name(input[1]);
    _contact[_index].set_nickname(input[2]);
    _contact[_index].set_phone_number(input[3]);
    _contact[_index].set_darkest_secret(input[4]);
    _index++;
    if (_index > 7)
        _index = 0;
}