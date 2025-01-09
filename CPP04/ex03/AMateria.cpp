#include "AMateria.hpp"

AMateria::AMateria(const std::string &type)
	: type(type)
{
	
}

const std::string &AMateria::getType() const
{
	return (type);
}


