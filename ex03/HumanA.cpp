#include "HumanA.hpp"

HumanA::HumanA(const std::string &name, Weapon &waepo) : name(name), weap(waepo)
{
}

void HumanA::attack(void) const
{
    std::cout << this->name <<  " attacks with their " << this->weap.getType() << std::endl;
}
