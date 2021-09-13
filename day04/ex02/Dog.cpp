#include "Dog.hpp"

/*---Constructors-and-distructor---*/
Dog::~Dog(void){std::cout<<"#Destructor Dog"<<std::endl; if (_brain) delete _brain;}
Dog::Dog(void) : Animal(){
	std::cout<<"#Constructor Dog"<<std::endl;
	this->_type = "Dog";
	_brain = new Brain();
}
Dog::Dog(Dog & copyDog){
	std::cout<<"#Copy constructor Dog"<<std::endl;
	_brain = new Brain();
	this->operator=(copyDog);
}

/*---Overload-operators---*/
Dog &Dog::operator=(Dog & operatorDog){
	this->_type = operatorDog._type;
	*_brain = *operatorDog._brain;
	return (*this);
}
std::ostream &operator<<(std::ostream &out, const Dog &dog){
	out<<dog.getType()<<std::endl
		<<"My ideas:"<<std::endl
		<<dog.getBrain();
	return (out);
}

/*---Functions---*/
void Dog::makeSound(void) const{
	std::cout<<"hello, i'm Dog"<<std::endl;
}
Brain &Dog::getBrain(void) const{
	return (*_brain);
}