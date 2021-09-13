#include "Cat.hpp"

/*---Constructors-and-distructor---*/
Cat::~Cat(void){std::cout<<"#Destructor Cat"<<std::endl; if (_brain) delete _brain;}
Cat::Cat(void) : Animal(){
	std::cout<<"#Constructor Cat"<<std::endl;
	this->_type = "Cat";
	_brain = new Brain();
}
Cat::Cat(Cat & copyCat){
	std::cout<<"#Copy constructor Cat"<<std::endl;
	_brain = new Brain();
	this->operator=(copyCat);
}

/*---Overload-operators---*/
Cat &Cat::operator=(Cat & operatorCat){
	this->_type = operatorCat._type;
	*_brain = *operatorCat._brain;
	return (*this);
}
std::ostream &operator<<(std::ostream &out, const Cat &cat){
	out<<cat.getType()<<std::endl
		<<"My ideas:"<<std::endl
		<<cat.getBrain();
	return (out);
}

/*---Functions---*/
void Cat::makeSound(void) const{
	std::cout<<"hello, i'm Cat"<<std::endl;
}
Brain &Cat::getBrain(void) const{
	return (*_brain);
}