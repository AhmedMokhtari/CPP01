
#pragma once


#include "Weapon.hpp"

class HumanA
{
private:
    std::string name;
    Weapon &weap;
public:
    HumanA(const std::string &name, Weapon &weap);
    void attack(void) const;
};
