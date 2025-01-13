#include <iostream>

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << "Default constructer for WrongCat Class." << std::endl;
	type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &other)
	: WrongAnimal()
{
	std::cout << "Copy constructer for WrongCat Class." << std::endl;
	*this = other;
}

WrongCat::~WrongCat()
{
	std::cout << "Destructer for WrongCat Class." << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &other)
{
	if (this != &other)
		this->type = other.type;
	return (*this);
}

void WrongCat::makeSound() const
{
	std::cout << "Wrong Miyav! Miyav!" << std::endl;
}

