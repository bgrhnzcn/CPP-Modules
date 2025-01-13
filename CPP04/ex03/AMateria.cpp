#include <iostream>

#include "AMateria.hpp"

AMateria::~AMateria()
{

}

AMateria::AMateria()
	: type("Default")
{

}

AMateria::AMateria(const std::string &type)
	: type(type)
{

}

AMateria::AMateria(const AMateria& other)
	: type(other.type)
{

}

AMateria& AMateria::operator=(const AMateria& other)
{
	(void)other;
	return (*this);
}

const std::string &AMateria::getType() const
{
	return (type);
}

void AMateria::use(ICharacter& target)
{
	std::cout << "* Materia has no effect on " << target.getName() << " *" << std::endl;
}
