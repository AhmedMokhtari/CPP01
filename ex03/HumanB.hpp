#pragma once


#include "Weapon.hpp"

class HumanB
{
private:
    std::string name;
    Weapon *weap;
public:
    HumanB(const std::string &name);
    void setWeapon(Weapon &weap);
    void attack(void) const;
};
