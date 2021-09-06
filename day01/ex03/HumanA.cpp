#include "HumanA.hpp"

HumanA::HumanA(void){
}

HumanA::HumanA(std::string name, Weapon &weapon){
    this->name = name;
    this->weapon = &weapon;
}

HumanA::~HumanA(void){
}

void HumanA::attack(void){
    std::cout<<name<<" attacks with his "<<weapon->getType()<<std::endl;
}