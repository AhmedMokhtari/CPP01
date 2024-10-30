#include "Zombie.hpp"

Zombie* newZombie( std::string name );

void randomChump( std::string name );

int main()
{
    Zombie *zm = newZombie("alloc ");
    zm->announce();
    randomChump("Stack ");
    delete zm;
    return 0;
}