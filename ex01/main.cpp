#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name );

int main()
{
    int num = 10;
    Zombie *zm = zombieHorde(num, "Allo ");
    int i = 0;
    while (i < num)
    {
        zm[i++].announce();
    }
    delete[] zm;
    return 0;
}