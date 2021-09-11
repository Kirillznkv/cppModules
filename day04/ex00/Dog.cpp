#include "Dog.hpp"

/*---Constructors-and-distructor---*/
Dog::~Dog(void){std::cout<<"#Destructor Dog"<<std::endl;}
Dog::Dog(void) : Animal(){
	std::cout<<"#Constructor Dog"<<std::endl;
	_type = "Dog";
}
Dog::Dog(Dog & copyDog){
	std::cout<<"#Copy constructor Dog"<<std::endl;
	this->operator=(copyDog);
}

/*---Overload-operators---*/
Dog &Dog::operator=(Dog & operatorDog){
	_type = operatorDog._type;
	return (*this);
}
std::ostream &operator<<(std::ostream &out, Dog &dog){
	out<<dog.getType();
	return (out);
}

/*---Functions---*/
void Dog::makeSound(void){
	std::cout<<"hello, i'm Dog"<<std::endl;
}