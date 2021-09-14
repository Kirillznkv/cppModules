#include "AMateria.hpp"

/*---Constructors-and-Destructor---*/
AMateria::AMateria(void) {this->_type = "noType";}
AMateria::AMateria(std::string const & type) {this->_type = type;}
AMateria::AMateria(const AMateria &copy) {this->operator=(copy);}
AMateria::~AMateria(void) {}

/*---Overload-operator---*/
AMateria &AMateria::operator=(const AMateria &op){
	this->_type = op._type;
	return (*this);
}

/*---Functions---*/
std::string const & AMateria::getType(void) const{
	return (_type);
}
AMateria *AMateria::clone(void) const{
	return (new AMateria(*this));
}
void AMateria::use(ICharacter & target){
	std::cout<<"* NO-NO-NO, i cant *"<<std::endl;
}