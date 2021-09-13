#include "WrongCat.hpp"

/*---Constructors-and-distructor---*/
WrongCat::~WrongCat(void){std::cout<<"#Destructor WrongCat"<<std::endl;}
WrongCat::WrongCat(void) : WrongAnimal(){
	std::cout<<"#Constructor WrongCat"<<std::endl;
	this->_type = "WrongCat";
}
WrongCat::WrongCat(WrongCat & copyWrongCat){
	std::cout<<"#Copy constructor WrongCat"<<std::endl;
	this->operator=(copyWrongCat);
}

/*---Overload-operators---*/
WrongCat &WrongCat::operator=(WrongCat & operatorWrongCat){
	this->_type = operatorWrongCat._type;
	return (*this);
}
std::ostream &operator<<(std::ostream &out, const WrongCat &wrongCat){
	out<<wrongCat.getType();
	return (out);
}

/*---Functions---*/
void WrongCat::makeSound(void) const{
	std::cout<<"hello, i'm WrongCat"<<std::endl;
}