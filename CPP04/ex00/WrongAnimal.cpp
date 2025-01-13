#include <iostream>

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
	: type("WrongAnimal")
{
	std::cout << "Default constructer for WrongAnimal Class." << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other)
{
	std::cout << "Copy constructer for WrongAnimal Class." << std::endl;
	*this = other;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "Destructer for WrongAnimal Class." << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other)
{
	if (this != &other)
		this->type = other.type;
	return (*this);
}

void WrongAnimal::makeSound() const
{
	std::cout << "Unrecognized very very wrong animal sound.." << std::endl;
}

std::string WrongAnimal::getType() const
{
	return (this->type);
}

