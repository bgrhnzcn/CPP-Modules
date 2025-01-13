#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		materias[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource& other)
{
	for (int i = 0; i < 4; i++)
		materias[i] = NULL;
	for (int i = 0; i < 4; i++)
		materias[i] = other.materias[i]->clone();
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		if (materias[i] != NULL)
		{
			delete materias[i];
			materias[i] = NULL;
		}
	}
}

MateriaSource& MateriaSource::operator=(const MateriaSource& other)
{
	for (int i = 0; i < 4; i++)
	{
		if (materias[i] != NULL)
		{
			delete materias[i];
			materias[i] = NULL;
		}
	}
	for (int i = 0; i < 4; i++)
		if (materias[i] == NULL)
			materias[i] = other.materias[i]->clone();
	return (*this);
}

void MateriaSource::learnMateria(AMateria* materia)
{
	for (int i = 0; i < 4; i++)
	{
		if (materias[i] == NULL)
		{
			materias[i] = materia;
			break ;
		}
	}
}

AMateria* MateriaSource::createMateria(const std::string& type)
{
	for (int i = 0; i < 4; i++)
		if (materias[i] != NULL && materias[i]->getType() == type)
			return (materias[i]->clone());
	return (NULL);
}
