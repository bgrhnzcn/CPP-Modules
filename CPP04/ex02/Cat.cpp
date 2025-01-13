#include <iostream>

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Default constructer for Cat Class." << std::endl;
	type = "Cat";
	brain = new Brain();
	for (int i = 0; i < 100; i++)
		brain->ideas[i] = "Cat idea.";
}

Cat::Cat(const Cat &other)
	: AAnimal()
{
	std::cout << "Copy constructer for Cat Class." << std::endl;
	brain = new Brain();
	*this = other;
}

Cat::Cat(const std::string& idea)
{
	std::cout << "Default constructer for Cat Class." << std::endl;
	type = "Cat";
	brain = new Brain();
	for (int i = 0; i < 100; i++)
		brain->ideas[i] = idea;
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

void Cat::printIdeas() const
{
	for (int i = 0; i < 100; i++)
		std::cout << brain->ideas[i] << std::endl;
}
