#include "Harl.hpp"
#include <string>
int main()
{
    Harl har;
    std::string line;
    while (true)
    {
        std::cout << BLUE << "Enter DEBUG, INFO, WARNING or ERROR commands\n" << RESET;
        getline(std::cin, line);
        if (std::cin.eof())
            return (2);
        har.complain(line);
    }
    return (0);
}