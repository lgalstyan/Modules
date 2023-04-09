#include "phonebook.hpp"

void search_command(PhoneBook pbook)
{
    int index;

    pbook.Search();
    std::cout << "Enter index for search contact: ";
    std::cin >> index;
    pbook.Search_with_index(index);
}

void add_command(PhoneBook *pbook)
{
    std::string input[5];

    std::cout << "Enter fisrt name: ";
    std::cin >> input[0];
    std::cout << "Enter last name: ";
    std::cin >> input[1];
    std::cout << "Enter nickname: ";
    std::cin >> input[2];
    std::cout << "Enter phone number: ";
    std::cin >> input[3];
    std::cout << "Enter darkest secret: ";
    std::cin >> input[4];
    if (input[0].empty() || input[1].empty() || input[2].empty() || input[3].empty() || input[4].empty())
        std::cout << "All the fields have been completed!\n";
    pbook->Add_contact(input);
    std::cout << "Contact successfully added in phonebook\n";
}

int main()
{
    PhoneBook fbook;
    std::string input;
    while (true)
    {
        std::cout << "Enter command: ADD, SEARCH or EXIT\n";
        std::cin >> input;
        if (input == "ADD")
            add_command(&fbook);
        else if (input == "SEARCH")
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