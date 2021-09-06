#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanB{
private:
    std::string name;
    Weapon *weapon;
    HumanB(void);
public:
    HumanB(std::string name);
    HumanB(std::string name, Weapon &weapon);
    ~HumanB(void);
	void setWeapon(Weapon &newWeapon);
    void attack(void);
};

#endif
