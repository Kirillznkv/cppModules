#include "Ice.hpp"
#include "Cure.hpp"
#include "MateriaSource.hpp"
#include "Character.hpp"


int main(void){
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria *tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	delete bob;
	delete me;
	delete src;
	{
		std::cout<<"<===================================>"<<std::endl;
		IMateriaSource* src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());

		ICharacter* me = new Character("me");
		AMateria *tmp;
		tmp = src->createMateria("ice");

		me->equip(tmp);
		me->equip(tmp);
		me->equip(tmp);
		me->equip(tmp);
		me->equip(tmp);
		me->equip(tmp);

		ICharacter* bob = new Character("bob");
		std::cout<<"<========USE-0-1-2-3-============>"<<std::endl;
		me->use(0, *bob);
		me->use(1, *bob);
		me->use(2, *bob);
		me->use(3, *bob);
		std::cout<<"<========USE-error-inx-==========>"<<std::endl;
		me->use(-10, *bob);
		me->use(4, *bob);

		std::cout<<"<========USE-not-found-==========>"<<std::endl;
		tmp = src->createMateria("noooooooFound");
		me->unequip(3);
		me->equip(tmp);
		me->use(3, *bob);

		std::cout<<"<========USE-new-core-===========>"<<std::endl;
		tmp = src->createMateria("cure");
		me->equip(tmp);
		me->use(3, *bob);
	}
	return (0);
}