#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
public:
	void learnMateria(AMateria* materia);
	AMateria* createMateria(const std::string& type);
};

#endif
