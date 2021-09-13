#include "Cat.hpp"

/*---Constructors-and-distructor---*/
Cat::~Cat(void){std::cout<<"#Destructor Cat"<<std::endl;}
Cat::Cat(void) : Animal(){
	std::cout<<"#Constructor Cat"<<std::endl;
	this->_type = "Cat";
}
Cat::Cat(Cat & copyCat){
	std::cout<<"#Copy constructor Cat"<<std::endl;
	this->operator=(copyCat);
}

/*---Overload-operators---*/
Cat &Cat::operator=(Cat & operatorCat){
	this->_type = operatorCat._type;
	return (*this);
}
std::ostream &operator<<(std::ostream &out, const Cat &cat){
	out<<cat.getType();
	return (out);
}

/*---Functions---*/
void Cat::makeSound(void) const{
	std::cout<<"hello, i'm Cat"<<std::endl;
}