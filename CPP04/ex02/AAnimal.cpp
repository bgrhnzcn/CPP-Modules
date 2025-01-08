#include <iostream>

#include "AAnimal.hpp"

AAnimal::AAnimal()
	: type("AAnimal")
{
	std::cout << "Default constructer for AAnimal Class." << std::endl;
}

AAnimal::AAnimal(const AAnimal &other)
{
	std::cout << "Copy constructer for AAnimal Class." << std::endl;
	*this = other;
}

AAnimal::~AAnimal()
{
	std::cout << "Destructer for AAnimal Class." << std::endl;
}

AAnimal &AAnimal::operator=(const AAnimal &other)
{
	if (this != &other)
		this->type = other.type;
	return (*this);
}

std::string AAnimal::getType() const
{
	return (this->type);
}

