#include "Cat.hpp"
#include "Dog.hpp"

int main(void){
	
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	delete i;
	delete j;

	// Animal animal();

	return (0);
}