#include "phonebook.hpp"

PhoneBook::PhoneBook()
{
	_count = 0;
    _index = 0;
}

PhoneBook::~PhoneBook(){}

int     PhoneBook::get_current_index()
{
    return (_index);
}

void    print_line(std::string str)
{
    if (str.length() < 11)
        std::cout << std::setw(10) << str;
    else
    {
        std::cout << str.substr(0, 9);
        std::cout << '.';
    }
}

int		PhoneBook::get_count()
{
	return (_count);
}

bool    PhoneBook::Search()
{
	if (_count == 0)
	{
		std::cout << "There is no any contact saved.\n" <<std::endl;
		return (false);
	}
	else
	{
    	for(int index = 0; index < _count; ++index)
    	{
    	    std::cout << std::setw(10) << index + 1 << "|";
    	    print_line(_contact[index].get_first_name());
    	    std::cout << "|";
    	    print_line(_contact[index].get_last_name());
    	    std::cout << "|";
    	    print_line(_contact[index].get_nickname());
    	    std::cout << std::endl;
    	}
	}
	return (true);
}

void    PhoneBook::Search_with_index(int index)
{
    if (index < 1 || index > 8)
    {
        std::cout << "Index isn't correct: [1, 8]\n";
        return;
    }
    if (index > _count)
    {
        std::cout << "There is no info about the index\n";
        return;
    }
    index--;
    std::cout <<_contact[index].get_first_name() << std::endl;
    std::cout <<_contact[index].get_last_name() << std::endl;
    std::cout <<_contact[index].get_nickname() << std::endl;
    std::cout <<_contact[index].get_phone_number() << std::endl;
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
	if (_count < 8)
    	_count++;

}