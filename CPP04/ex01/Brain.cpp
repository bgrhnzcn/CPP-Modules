#include <iostream>

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Default constructer for Brain Class." << std::endl;
}

Brain::Brain(const Brain &other)
{
	std::cout << "Copy constructer for Brain Class." << std::endl;
	*this = other;
}

Brain::~Brain()
{
	std::cout << "Destructer for Brain Class." << std::endl;
}

Brain &Brain::operator=(const Brain &other)
{
	if (this != &other)
		for (int i = 0; i < 100; i++)
			this->ideas[i] = other.ideas[i];
	return (*this);
}

