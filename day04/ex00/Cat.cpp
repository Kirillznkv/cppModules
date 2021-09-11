#include "Cat.hpp"

/*---Constructors-and-distructor---*/
Cat::~Cat(void){std::cout<<"#Destructor Cat"<<std::endl;}
Cat::Cat(void) : Animal(){
	std::cout<<"#Constructor Cat"<<std::endl;
	_type = "Cat";
}
Cat::Cat(Cat & copyCat){
	std::cout<<"#Copy constructor Cat"<<std::endl;
	this->operator=(copyCat);
}

/*---Overload-operators---*/
Cat &Cat::operator=(Cat & operatorCat){
	_type = operatorCat._type;
	return (*this);
}
std::ostream &operator<<(std::ostream &out, Cat &cat){
	out<<cat.getType();
	return (out);
}

/*---Functions---*/
void Cat::makeSound(void){
	std::cout<<"hello, i'm Cat"<<std::endl;
}