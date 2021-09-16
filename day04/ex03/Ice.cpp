#include "Ice.hpp"

/*---Constructors-and-Destructor---*/
Ice::Ice(void): AMateria(){this->_type = "ice";}
Ice::Ice(const Ice & copy){this->operator=(copy);}
Ice::~Ice(void){}

/*---Overload-operator---*/
Ice &Ice::operator=(const Ice & op){
	this->_type = op._type;
	return (*this);
}

/*---Functions---*/
AMateria *Ice::clone(void) const{
	return (new Ice(*this));
}
void Ice::use(ICharacter & target){
	std::cout<<"* shoots an ice bolt at "<<target.getName()<<" *"<<std::endl;
}