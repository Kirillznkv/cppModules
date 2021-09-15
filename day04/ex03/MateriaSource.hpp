#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : IMateriaSource{
private:
	AMateria _materias[4];
	unsigned short int _numderMaterias;
public:
	/*---Constructors-and-Destructor---*/
	MateriaSource(void);
	MateriaSource(const MateriaSource &copy);
	~MateriaSource(void);
	/*---Overload-operator---*/
	MateriaSource &operator=(const MateriaSource & op);
	/*---Functions---*/
	void learnMateria(AMateria* newMateria);
	AMateria* createMateria(std::string const & type);
};

#endif