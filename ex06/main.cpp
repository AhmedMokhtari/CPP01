#include "Harl.hpp"
#include <cstdio>

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cout << "Invalide Argument \n";
        return 0;
    }
    Harl hp;
    std::string tmp = argv[1];
    hp.complain(tmp);
    
    return (0);
}