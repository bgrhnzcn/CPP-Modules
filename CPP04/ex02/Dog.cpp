#include <iostream>

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Default constructer for Dog Class." << std::endl;
	brain = new Brain();
	type = "Dog";
}

Dog::Dog(const Dog &other)
{
	std::cout << "Copy constructer for Dog Class." << std::endl;
	brain = new Brain();
	*this = other;
}

Dog::~Dog()
{
	std::cout << "Destructer for Dog Class." << std::endl;
	delete brain;
}

Dog &Dog::operator=(const Dog &other)
{
	if (this != &other)
	{
		this->type = other.type;
		*this->brain = *other.brain;
	}
	return (*this);
}

void Dog::makeSound() const
{
	std::cout << "Hav! Hav!" << std::endl;
}

