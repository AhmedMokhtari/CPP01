#include "Zombie.hpp"

Zombie::Zombie(const std::string &name)
{
    this->name = name;
}

Zombie::~Zombie()
{
        std::cout  << this->name << ": destructor called" << std::endl;
}

void Zombie::announce(void)
{
    std::cout  << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}