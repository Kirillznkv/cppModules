#include "HumanB.hpp"

HumanB::HumanB(void){
}

HumanB::HumanB(std::string name){
    this->name = name;
}

HumanB::HumanB(std::string name, Weapon &weapon){
    this->name = name;
    this->weapon = &weapon;
}

HumanB::~HumanB(void){
}

void HumanB::attack(void){
    std::cout<<name<<" attacks with his "<<weapon->getType()<<std::endl;
}

void HumanB::setWeapon(Weapon &newWeapon){
	weapon = &newWeapon;
}