#include "ScavTrap.hpp"

/*---Constructors-and-destructor---*/
ScavTrap::ScavTrap(std::string name) : ClapTrap(name){
	std::cout<<"#Constructor ScavTrap with name"<<std::endl;
	_name = name;
	_hitpoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
}
ScavTrap::ScavTrap(const ScavTrap & copyTrap){
	std::cout<<"#Copy constructor ScavTrap"<<std::endl;
	this->operator=(copyTrap);
}
ScavTrap::~ScavTrap(void){
	std::cout<<"#Destructor ScavTrap with name"<<std::endl;
}

/*---Overload-operators---*/
ScavTrap &ScavTrap::operator=(const ScavTrap & operatorTrap){
	std::cout<<"#Operator ="<<std::endl;
	_name = operatorTrap._name;
	_attackDamage = operatorTrap._attackDamage;
	_energyPoints = operatorTrap._energyPoints;
	_hitpoints = operatorTrap._hitpoints;
	return (*this);
}
std::ostream& operator<< (std::ostream &out, const ScavTrap &trap){
	out<<"#Operator <<"<<std::endl
		<<"name = "<<trap.getName()<<std::endl
		<<"HP = "<<trap.getHitpoints()<<std::endl
		<<"energy = "<<trap.getEnergyPoints()<<std::endl
		<<"attack = "<<trap.getAttackDamage()<<std::endl;
	return (out);
}

/*---Functions---*/
void ScavTrap::guardGate(void){
	std::cout<<"ScavTrap have enterred in Gate keeper mode."<<std::endl;
}