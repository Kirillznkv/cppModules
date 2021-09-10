#include "ClapTrap.hpp"

/*---Constructors-and-Destructor---*/
ClapTrap::~ClapTrap(void){std::cout<<"#Destructor ClapTrap"<<std::endl;}
ClapTrap::ClapTrap(void){
	std::cout<<"#Default constructor ClapTrap"<<std::endl;
	_name = "noName";
	_hitpoints = 10;
	_energyPoints = 10;
	_attackDamage = 0;
}
ClapTrap::ClapTrap(std::string name){
	std::cout<<"#Constructor ClapTrap with name"<<std::endl;
	_name = name;
	_hitpoints = 10;
	_energyPoints = 10;
	_attackDamage = 0;
}
ClapTrap::ClapTrap(const ClapTrap &copyTrap){
	std::cout<<"#Copy constructor ClapTrap"<<std::endl;
	this->operator=(copyTrap);
}

/*---Overload-operators---*/
ClapTrap &ClapTrap::operator = (const ClapTrap &operatorClapTrap){
	std::cout<<"#Operator ="<<std::endl;
	_name = operatorClapTrap._name;
	_hitpoints = operatorClapTrap._hitpoints;
	_energyPoints = operatorClapTrap._energyPoints;
	_attackDamage = operatorClapTrap._attackDamage;
	return (*this);
}
std::ostream& operator<< (std::ostream &out, const ClapTrap &trap){
	out<<"#Operator <<"<<std::endl
		<<"name = "<<trap.getName()<<std::endl
		<<"HP = "<<trap.getHitpoints()<<std::endl
		<<"energy = "<<trap.getEnergyPoints()<<std::endl
		<<"attack = "<<trap.getAttackDamage()<<std::endl;
	return (out);
}

/*---Getters---*/
std::string ClapTrap::getName(void) const{
	return(_name);
}
unsigned int ClapTrap::getHitpoints(void) const{
	return(_hitpoints);
}
unsigned int ClapTrap::getEnergyPoints(void) const{
	return(_energyPoints);
}
unsigned int ClapTrap::getAttackDamage(void) const{
	return(_attackDamage);
}

/*---Functions---*/
void ClapTrap::attack(std::string const & target){
	if (_energyPoints > 0){
		std::cout<<_name<<" attack "<<target<<", causing "<<_attackDamage<<" points of damage!"<<std::endl;
		_energyPoints--;
	}
	else
		std::cout<<_name<<" does not have energy points to inflict damage "<<target<<std::endl;
}
void ClapTrap::takeDamage(unsigned int amount){
	std::cout<<_name<<" received "<<amount<<" points of damage";
	if (amount >= _hitpoints){
		std::cout<<" and died"<<std::endl;
		_hitpoints = 0;
	}
	else{
		std::cout<<std::endl;
		_hitpoints -= amount;
	}
}
void ClapTrap::beRepaired(unsigned int amount){
	std::cout<<_name<<" restored "<<amount<<" points of energy"<<std::endl;
	_energyPoints += amount;
}