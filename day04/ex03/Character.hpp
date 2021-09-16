#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"

class Character : public ICharacter{
private:
	std::string _name;
	AMateria *_materias[4];
public:
	/*---Constructors-and-Destructor---*/
	Character(void);
	Character(std::string name);
	Character(const Character &copy);
	~Character(void);
	/*---Overload-operator---*/
	Character &operator=(const Character &op);
	/*---Functions---*/
	std::string const &getName(void) const;
	void equip(AMateria *m);
	void unequip(int idx);
	void use(int idx, ICharacter &target);
};

#endif