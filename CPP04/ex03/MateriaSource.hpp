#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
public:
	MateriaSource();
	MateriaSource(const MateriaSource& other);
	~MateriaSource();
	MateriaSource& operator=(const MateriaSource& other);
public:
	void learnMateria(AMateria* materia);
	AMateria* createMateria(const std::string& type);
private:
	AMateria* materias[4];
};

#endif
