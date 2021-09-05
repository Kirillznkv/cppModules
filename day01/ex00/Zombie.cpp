#include "Zombie.hpp"

Zombie::Zombie(void) {
    name = "noname";
    std::cout<<"Zombie created in stack"<<std::endl;
}

Zombie::Zombie(std::string name) {
    this->name = name;
    std::cout<<"Zombie ("<<this->name<<") created in heap"<<std::endl;
}

Zombie::~Zombie(void) {
    std::cout<<"Zombie ("<<name<<") died"<<std::endl;
}

void Zombie::announce(void) const {
    std::cout<<name<<" BraiiiiiiinnnzzzZ..."<<std::endl;
}

void Zombie::setName(std::string name) {
    this->name = name;
}
