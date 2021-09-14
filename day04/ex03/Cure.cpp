#include "Cure.hpp"

/*---Constructors-and-Destructor---*/
Cure::Cure(void){this->_type = "cure";}
Cure::Cure(const Cure & copy){this->operator=(copy);}
Cure::~Cure(void){}

/*---Overload-operator---*/
Cure &Cure::operator=(const Cure & op){
	this->_type = op._type;
	return (*this);
}

/*---Functions---*/
AMateria *Cure::clone(void) const{
	return (new Cure(*this));
}
void Cure::use(ICharacter & target){
	std::cout<<"* heals NAME’s wounds *"<<std::endl;
}