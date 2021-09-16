#include "MateriaSource.hpp"

/*---Constructors-and-Destructor---*/
MateriaSource::MateriaSource(void){
	for (int i = 0; i < 4; ++i)
		_materias[i] = nullptr;
}
MateriaSource::MateriaSource(const MateriaSource &copy){
	this->operator=(copy);
}
MateriaSource::~MateriaSource(void){
	for (int i = 0; i < 4; ++i)
		if (_materias[i])
			delete _materias[i];
}

/*---Overload-operator---*/
MateriaSource &MateriaSource::operator=(const MateriaSource & op){
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
void MateriaSource::learnMateria(AMateria* newMateria){
	for (int i = 0; i < 4; ++i){
		if (_materias[i] == nullptr)
		{
			_materias[i] = newMateria->clone();
			break ;
		}
	}
}
AMateria* MateriaSource::createMateria(std::string const & type){
	for (int i = 0; i < 4; ++i){
		if (_materias[i] && _materias[i]->getType() == type)
			return _materias[i]->clone();
	}
	return nullptr;
}