#include <iostream>
#include <fstream>

std::string read_file(const std::string &file_name)
{   
    std::string  tmp;
    std::string  content;
    std::ifstream file(file_name);

    if (!file.is_open())
    {
        std::cout << "Error in open file \n";
        std::exit(0);
    }
    while (getline(file, tmp))
    {
        content += tmp;
        content += "\n";
    }
    file.close();
    return content;
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

void    write_to_file(const std::string &replaced, const std::string &file_name)
{
    std::ofstream file(file_name);
    if (!file.is_open())
    {
        std::cout << "Error in open and write to file \n";
        std::exit(0);
    }
    file << replaced;
    file.close();
}
void xx()
{
    system("lsof -c replace");
}
int main(int argc, char **argv)
{
    atexit(xx);
    if (argc != 4)
    {
        std::cout << "s1 s2 <filename.replace>\n";
        return (0);
    }
    std::cout << "Arg 1 " << argv[1] << std::endl;
    std::string content = read_file(argv[1]);
    std::string replaced = replace_file(content, argv[2], argv[3]);
    write_to_file(replaced, argv[1] + std::string(".replace"));
    return 0;
}