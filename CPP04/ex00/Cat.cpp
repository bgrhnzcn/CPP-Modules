#include <iostream>

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Default constructer for Cat Class." << std::endl;
	type = "Cat";
}

Cat::Cat(const Cat &other)
	: Animal()
{
	std::cout << "Copy constructer for Cat Class." << std::endl;
	*this = other;
}

Cat::~Cat()
{
	std::cout << "Destructer for Cat Class." << std::endl;
}

Cat &Cat::operator=(const Cat &other)
{
	if (this != &other)
		this->type = other.type;
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << "Miyav! Miyav!" << std::endl;
}

