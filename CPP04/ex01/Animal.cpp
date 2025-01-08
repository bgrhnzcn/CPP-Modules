#include <iostream>

#include "Animal.hpp"

Animal::Animal()
	: type("Animal")
{
	std::cout << "Default constructer for Animal Class." << std::endl;
}

Animal::Animal(const Animal &other)
{
	std::cout << "Copy constructer for Animal Class." << std::endl;
	*this = other;
}

Animal::~Animal()
{
	std::cout << "Destructer for Animal Class." << std::endl;
}

Animal &Animal::operator=(const Animal &other)
{
	if (this != &other)
		this->type = other.type;
	return (*this);
}

void Animal::makeSound() const
{
	std::cout << "Unrecognized animal sound.." << std::endl;
}

std::string Animal::getType() const
{
	return (this->type);
}

