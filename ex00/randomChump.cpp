#include "Zombie.hpp"

void randomChump(std::string name)
{
    Zombie zm = Zombie(name);
    zm.announce();
}