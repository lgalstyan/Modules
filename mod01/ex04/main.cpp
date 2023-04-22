#include <iostream>
#include <fstream>

static std::string replace_string(std::string str, std::string s1, std::string s2)
{
    size_t end = s1.length();
    size_t start = str.find(s1);
    while (start < str.length() && start != std::string::npos)
    {
        str.erase(start, end);
        str.insert(start, s2);
        start = str.find(s1, start + end);
    }
    return (str);
}

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

    std::ifstream old_file(filename);
    if (!old_file)
    {
        std::cout << "Error: " << filename << "file not found\n";
        return (2);
    }
    
    std::ofstream new_file(filename + ".replace");
    if (!new_file)
    {
        std::cout << "Error: con't create " << filename + ".replace" << " file\n";
        return (2);
    }
    std::getline(old_file, rep_string);
    while (!old_file.eof())
    {
        replace_string(rep_string, s1, s2);
        new_file << rep_string + '\n';
        std::getline(old_file, rep_string);
    }

    old_file.close();
    new_file.close();
    
}