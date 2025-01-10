#include <iostream>

#include "AMateria.hpp"

AMateria::~AMateria()
{

}

AMateria::AMateria(const std::string &type)
	: type(type)
{
	
}

const std::string &AMateria::getType() const
{
	return (type);
}

void AMateria::use(ICharacter& target)
{
	(void)target;
}
