#include <iostream>

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Default constructer for Dog Class." << std::endl;
	type = "Dog";
}

Dog::Dog(const Dog &other)
{
	std::cout << "Copy constructer for Dog Class." << std::endl;
	*this = other;
}

Dog::~Dog()
{
	std::cout << "Destructer for Dog Class." << std::endl;
}

Dog &Dog::operator=(const Dog &other)
{
	if (this != &other)
		this->type = other.type;
	return (*this);
}

void Dog::makeSound() const
{
	std::cout << "Hav! Hav!" << std::endl;
}

