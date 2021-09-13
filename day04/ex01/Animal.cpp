#include "Animal.hpp"

/*---Constructors-and-distructor---*/
Animal::~Animal(void){std::cout<<"#Destructor Animal"<<std::endl;}
Animal::Animal(void){
	std::cout<<"#Constructor Animal"<<std::endl;
	_type = "noType";
}
Animal::Animal(Animal & copyAnimal){
	std::cout<<"#Copy constructor Animal"<<std::endl;
	this->operator=(copyAnimal);
}

/*---Overload-operators---*/
Animal &Animal::operator=(Animal & operatorAnimal){
	_type = operatorAnimal._type;
	return (*this);
}
std::ostream &operator<<(std::ostream &out, const Animal &animal){
	out<<animal.getType();
	return (out);
}

/*---Getters---*/
std::string Animal::getType(void) const{
	return (_type);
}

/*--Functions---*/
void Animal::makeSound(void) const{
	std::cout<<"hello, i'm Animal(noType)"<<std::endl;
}