#include "HumanB.hpp"

HumanB::HumanB(const std::string &name)
{
    this->name = name;
}
void HumanB::setWeapon(Weapon &weap)
{
    this->weap = &weap;
}

void HumanB::attack(void) const
{
    std::cout << this->name <<  " attacks with their " << this->weap->getType() << std::endl;
}
