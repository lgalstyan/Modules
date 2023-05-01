#include "replace.hpp"

Replace::Replace(std::string fn, std::string s1, std::string s2)
{
    _s1 = s1;
    _s2 = s2;
    _filename = fn;
}

std::string Replace::replace_string(std::string str, std::string s1, std::string s2)
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

void Replace::replace_file()
{
    std::string rep_string;
    std::ifstream old_file(_filename);
    if (!old_file)
    {
        std::cout << "Error: " << _filename << "file not found\n";
    }
    std::ofstream new_file(_filename + ".replace");
    if (!new_file)
    {
        std::cout << "Error: con't create " << _filename + ".replace" << " file\n";
    }
    while (std::getline(old_file, rep_string))
    {
        rep_string = replace_string(rep_string, _s1, _s2);
        new_file << rep_string;
        if (!old_file.eof())
            new_file << '\n';
        else
            break;
    }
}

Replace::~Replace()
{
    // _old_file.close();
    // new_file.close();
}