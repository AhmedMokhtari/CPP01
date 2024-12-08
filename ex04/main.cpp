#include <iostream>
#include <fstream>  
#include <sstream>   
#include <cstdlib>

std::string read_file(const std::string &file_name)
{   
    std::string  tmp;
    std::string  content;
    std::ifstream file(file_name.c_str());

    if (!file.is_open())
    {
        std::cout << "Error in open file \n";
        exit(0);
    }
    std::stringstream s;
    s << file.rdbuf();
    file.close();
    return s.str();
}

std::string replace_file(std::string &content, const std::string &s1, const std::string &s2)
{   
    std::string  replaced;
    size_t pos;
    int s1_len = s1.size();

    if (!s1.compare(s2))
        return content;
    while ((pos = content.find(s1)) != std::string::npos)
    {   
        content.erase(pos, s1_len);
        content.insert(pos, s2);
    }
    replaced = content;
    return replaced;
}

void    write_to_file(const std::string &replaced,  const std::string &file_name)
{
    std::ofstream file(file_name.c_str());
    if (!file.is_open())
    {
        std::cout << "Error in open and write to file \n";
        exit(0);
    }
    file << replaced;
    file.close();
}

int main(int argc, char **argv)
{
    if (argc != 4)
    {
        std::cout << "filename s1 s2\n";
        return (0);
    }
    std::string content = read_file(argv[1]);
    std::string replaced = replace_file(content, argv[2], argv[3]);
    write_to_file(replaced, argv[1] + std::string(".replace"));
    return 0;
}