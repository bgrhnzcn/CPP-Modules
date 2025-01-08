#include <iostream>

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Default constructer for Cat Class." << std::endl;
	brain = new Brain();
	type = "Cat";
}

Cat::Cat(const Cat &other)
{
	std::cout << "Copy constructer for Cat Class." << std::endl;
	brain = new Brain();
	*this = other;
}

Cat::~Cat()
{
	std::cout << "Destructer for Cat Class." << std::endl;
	delete brain;
}

Cat &Cat::operator=(const Cat &other)
{
	if (this != &other)
	{
		this->type = other.type;
		*this->brain = *other.brain;
	}
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << "Miyav! Miyav!" << std::endl;
}

