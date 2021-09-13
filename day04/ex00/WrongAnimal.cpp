#include "WrongAnimal.hpp"

/*---Constructors-and-distructor---*/
WrongAnimal::~WrongAnimal(void){std::cout<<"#Destructor WrongAnimal"<<std::endl;}
WrongAnimal::WrongAnimal(void){
	std::cout<<"#Constructor WrongAnimal"<<std::endl;
	_type = "noType";
}
WrongAnimal::WrongAnimal(WrongAnimal & copyWrongAnimal){
	std::cout<<"#Copy constructor WrongAnimal"<<std::endl;
	this->operator=(copyWrongAnimal);
}

/*---Overload-operators---*/
WrongAnimal &WrongAnimal::operator=(WrongAnimal & operatorWrongAnimal){
	_type = operatorWrongAnimal._type;
	return (*this);
}
std::ostream &operator<<(std::ostream &out, const WrongAnimal &wrongAnimal){
	out<<wrongAnimal.getType();
	return (out);
}

/*---Getters---*/
std::string WrongAnimal::getType(void) const{
	return (_type);
}

/*--Functions---*/
void WrongAnimal::makeSound(void) const{
	std::cout<<"hello, i'm WrongAnimal(noType)"<<std::endl;
}