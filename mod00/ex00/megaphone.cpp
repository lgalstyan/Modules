#include <iostream>

void printf_to_upper(char *str, int n)
{
    for (int i = 0; i < n; ++i)
    {
        std::cout << (char)std::toupper(str[i]);
    }
}

int main(int argc, char **argv)
{
    int len;

    if (argc < 2)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
        return (1);
    }
    for (int i = 1; i < argc; ++i)
    {
        len = strlen(argv[i]);
        printf_to_upper(argv[i], len);
    }
    return (0);
}