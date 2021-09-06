#include "Weapon.hpp"

Weapon::Weapon(void){
	type = "noType";
}

Weapon::Weapon(std::string type){
	this->type = type;
}

Weapon::~Weapon(void){
}

std::string Weapon::getType(void){
	return (type);
}

void Weapon::setType(std::string type){
	this->type = type;
}