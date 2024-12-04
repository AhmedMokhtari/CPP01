#include "HumanB.hpp"
#include <cstdio>
HumanB::HumanB(const std::string &name):name(name),weap(NULL)
{

}
void HumanB::setWeapon(Weapon &weap)
{
    this->weap = &weap;
}

void HumanB::attack(void) const
{
    if (weap)
        std::cout << this->name <<  " attacks with their " << this->weap->getType() << std::endl;
}
