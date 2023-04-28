#include "Harl.hpp"

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cerr << "Enter DEBUG, INFO, WARNING or ERROR\n";
        return (1);
    }
    Harl har;
    har.complain(argv[1]);
    return (0);
}