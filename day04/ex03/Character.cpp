#include "Character.hpp"

/*---Constructors-and-Destructor---*/
Character::Character(void){
	_name = "noName";
	for (int i = 0; i < 4; ++i)
		_materias[i] = nullptr;
}
Character::Character(std::string name) : _name(name){
	for (int i = 0; i < 4; ++i)
		_materias[i] = nullptr;
}
Character::Character(const Character & copy){
	this->operator=(copy);
}
Character::~Character(void){
	for (int i = 0; i < 4; ++i)
	{
		if (_materias[i])
			delete _materias[i];
	}
}

/*---Overload-operator---*/
Character &Character::operator=(const Character &op){
	if (this == &op)
		return (*this);
	for (int i = 0; i < 4; ++i)
	{
		if (_materias[i])
			delete _materias[i];
		_materias[i] = op._materias[i]->clone();
	}
	return (*this);
}

/*---Functions---*/
std::string const &Character::getName(void) const{
	return (_name);
}
void Character::equip(AMateria *m){
	for (int i = 0; i < 4; ++i){
		if (_materias[i] == nullptr){
			_materias[i] = m;
			break ;
		}
	}
}
void Character::unequip(int idx){
	if (idx < 0 || idx >= 4)
		return ;
	_materias[idx] = nullptr;
}
void Character::use(int idx, ICharacter &target){
	if (idx < 0 || idx >= 4)
		return ;
	if (_materias[idx])
		_materias[idx]->use(target);
}