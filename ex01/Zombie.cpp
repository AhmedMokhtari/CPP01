#include "Zombie.hpp"

Zombie::Zombie()
{
}


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

std::string Zombie::get_name(void) const
{
    return this->name;
}
void Zombie::set_name(const std::string &name)
{
    this->name = name;
}