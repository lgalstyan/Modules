#include "phonebook.hpp"
#include <stdlib.h>

void	search_command(PhoneBook pbook)
{
    std::string input;
    char *current;
	int	index;

    if (!pbook.Search())
		return ;
    std::cout << "Enter index for search contact: ";
	getline(std::cin, input);
    if (std::cin.eof())
		return ;
    std::strtol(input.c_str(), &current, 10);
    if (*current != '\0')
    {
		std::cout << RED << "Error: index must contain only digits\n"  << RESET;
    }
	else
    {
        index = std::atoi(input.c_str());
        pbook.Search_with_index(index);
    }
}

int	check_fon(std::string str)
{
	unsigned int i;

	i = 0;
	if (str[i] == '+')
		++i;
	while (str[i])
	{
		if (!isdigit(str[i]))
			return (2);
		++i;
	}
	return (0);
}

void add_command(PhoneBook *pbook)
{
    std::string input[5];

    std::cout << "Enter fisrt name: ";
    getline(std::cin, input[0]);
    std::cout << "Enter last name: ";
    getline(std::cin, input[1]);
    std::cout << "Enter nickname: ";
    getline(std::cin, input[2]);
    std::cout << "Enter phone number: ";
    getline(std::cin, input[3]);
    std::cout << "Enter darkest secret: ";
    getline(std::cin, input[4]);
    if (input[0].empty() || input[1].empty() || input[2].empty() || input[3].empty() || input[4].empty())
        std::cout << "All the fields have been completed!\n";
	else if (check_fon(input[3]))
	{
        std::cout << RED << "Error: phone number must contain only digits\n" << RESET;
	}
	else
	{
    	pbook->Add_contact(input);
    	std::cout << "Contact successfully added in phonebook\n";
	}
}

int main()
{
    PhoneBook fbook;
    std::string input;
    while (true)
    {
        std::cout << "Enter command: ADD, SEARCH or EXIT\n";
    	getline(std::cin, input);
        if (input == "ADD")
            add_command(&fbook);
        else if (input ==  "SEARCH")
			search_command(fbook);
        else if (input == "EXIT")
        {
            return (0);
        }
        else
        {
            std::cout << "Bad command!\n";
        }
    }
    return (0);
}