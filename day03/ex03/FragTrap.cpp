#include "FragTrap.hpp"

/*---Constructors-and-destructor---*/
FragTrap::~FragTrap(void){std::cout<<"#Destructor FragTrap with name"<<std::endl;}
FragTrap::FragTrap(void) : ClapTrap(){
	std::cout<<"#Constructor FragTrap with name"<<std::endl;
	_name = "noName";
	_hitpoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
}
FragTrap::FragTrap(std::string name) : ClapTrap(name){
	std::cout<<"#Constructor FragTrap with name"<<std::endl;
	_name = name;
	_hitpoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
}
FragTrap::FragTrap(const FragTrap & copyTrap){
	std::cout<<"#Copy constructor FragTrap"<<std::endl;
	this->operator=(copyTrap);
}

/*---Overload-operators---*/
FragTrap &FragTrap::operator=(const FragTrap & operatorTrap){
	std::cout<<"#Operator ="<<std::endl;
	_name = operatorTrap._name;
	_attackDamage = operatorTrap._attackDamage;
	_energyPoints = operatorTrap._energyPoints;
	_hitpoints = operatorTrap._hitpoints;
	return (*this);
}
std::ostream& operator<< (std::ostream &out, const FragTrap &trap){
	out<<"#Operator <<"<<std::endl
		<<"name = "<<trap.getName()<<std::endl
		<<"HP = "<<trap.getHitpoints()<<std::endl
		<<"energy = "<<trap.getEnergyPoints()<<std::endl
		<<"attack = "<<trap.getAttackDamage()<<std::endl;
	return (out);
}

/*---Functions---*/
void FragTrap::highFivesGuys(void){
	std::cout<<"Positive high fives request"<<std::endl;
}