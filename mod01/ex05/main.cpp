#include "Harl.hpp"

int main()
{
    Harl har;
    std::string line;
    while (true)
    {
        std::cout << BLUE << "Enter DEBUG, INFO, WARNING or ERROR commands\n" << RESET;
        getline(std::cin, line);
        har.complain(line);
    }
    return (0);
}