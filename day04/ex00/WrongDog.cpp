#include "WrongDog.hpp"

/*---Constructors-and-distructor---*/
WrongDog::~WrongDog(void){std::cout<<"#Destructor WrongDog"<<std::endl;}
WrongDog::WrongDog(void) : WrongAnimal(){
	std::cout<<"#Constructor WrongDog"<<std::endl;
	this->_type = "WrongDog";
}
WrongDog::WrongDog(WrongDog & copyWrongDog){
	std::cout<<"#Copy constructor WrongDog"<<std::endl;
	this->operator=(copyWrongDog);
}

/*---Overload-operators---*/
WrongDog &WrongDog::operator=(WrongDog & operatorWrongDog){
	this->_type = operatorWrongDog._type;
	return (*this);
}
std::ostream &operator<<(std::ostream &out, const WrongDog &wrongDog){
	out<<wrongDog.getType();
	return (out);
}

/*---Functions---*/
void WrongDog::makeSound(void) const{
	std::cout<<"hello, i'm WrongDog"<<std::endl;
}