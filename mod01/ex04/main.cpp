#include "replace.hpp"

int main(int argc, char **argv)
{
    if (argc != 4)
    {
        std::cout << "Error: must be 3 parameters\n";
        return (1);
    }
    std::string filename = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];
    std::string rep_string;

    std::ofstream old_file(filename);
    if (!old_file)
    {
        std::cout << "Error: " << filename << "file not found\n";
        return (2);
    }
    
    std::ifstream new_file(filename + ".replace");
    {
        std::cout << "Error: con't create " << filename + ".replace" << "file\n";
        return (2);
    }
    getline(old_file, rep_string);
    while (!old_file.eof())
    {
        replace_string(rep_string, s1, s2);
        new_file << rep_string;
        getline(old_file, rep_string);
    }

    old_file.close();
    new_file.close();
    
}