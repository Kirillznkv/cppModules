#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"
#include "WrongDog.hpp"

int main(void){
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();


	const WrongAnimal* metaW = new WrongAnimal();
	const WrongAnimal* jW = new WrongDog();
	const WrongAnimal* iW = new WrongCat();
	std::cout << jW->getType() << " " << std::endl;
	std::cout << iW->getType() << " " << std::endl;
	iW->makeSound(); //will output the cat sound!
	jW->makeSound();
	metaW->makeSound();

	delete i;
	delete iW;
	delete j;
	delete jW;
	delete meta;
	delete metaW;

	return (0);
}