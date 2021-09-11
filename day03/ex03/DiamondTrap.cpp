#include "DiamondTrap.hpp"

/*---Constructors-and-destructor---*/
DiamondTrap::~DiamondTrap(void){std::cout<<"#Destructor DiamondTrap with name"<<std::endl;}
DiamondTrap::DiamondTrap(void) : ClapTrap(), ScavTrap(), FragTrap(){
	std::cout<<"#Constructor DiamondTrap with name"<<std::endl;
	this->_name = "noName";
	ClapTrap::_name = this->_name + "_clap_name";
	this->_hitpoints = FragTrap::_hitpoints;
	this->_energyPoints = 50;//ScavTrap::_energyPoints;
	this->_attackDamage = FragTrap::_attackDamage;
}
DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name){
	std::cout<<"#Constructor DiamondTrap with name"<<std::endl;
	this->_name = name;
	ClapTrap::_name = name + "_clap_name";
	this->_hitpoints = FragTrap::_hitpoints;
	this->_energyPoints = 50;//ScavTrap::_energyPoints;
	this->_attackDamage = FragTrap::_attackDamage;
}
DiamondTrap::DiamondTrap(const DiamondTrap & copyTrap){
	std::cout<<"#Copy constructor DiamondTrap"<<std::endl;
	this->operator=(copyTrap);
}

/*---Overload-operators---*/
DiamondTrap &DiamondTrap::operator=(const DiamondTrap & operatorTrap){
	std::cout<<"#Operator ="<<std::endl;
	this->_name = operatorTrap._name;
	ClapTrap::_name = this->_name + "_clap_name";
	this->_attackDamage = operatorTrap._attackDamage;
	this->_energyPoints = operatorTrap._energyPoints;
	this->_hitpoints = operatorTrap._hitpoints;
	return (*this);
}
std::ostream& operator<< (std::ostream &out, const DiamondTrap &trap){
	out<<"#Operator <<"<<std::endl
		<<"name = "<<trap.getName()<<std::endl
		<<"HP = "<<trap.getHitpoints()<<std::endl
		<<"energy = "<<trap.getEnergyPoints()<<std::endl
		<<"attack = "<<trap.getAttackDamage()<<std::endl;
	return (out);
}

/*---Functions---*/
void DiamondTrap::whoAmI(void){
	std::cout<<_hitpoints<<" "<<_energyPoints<<" "<<_attackDamage<<std::endl;
	std::cout<<"(my name: "<<this->_name<<")    (clapTrap name: "<<ClapTrap::_name<<")"<<std::endl;
}

void DiamondTrap::attack(std::string const & target){
	//ScavTrap::attack(target);
	if (_energyPoints > 0){
		std::cout<<"(ScavTrap attac): "<<_name<<" attack "<<target<<", causing "<<_attackDamage<<" points of damage!"<<std::endl;
		_energyPoints--;
	}
	else
		std::cout<<_name<<" does not have energy points to inflict damage "<<target<<std::endl;
}
