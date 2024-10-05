#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed(void)
	: fixed_val(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& other)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

Fixed::Fixed(const int val)
{
	(void)val;
}

Fixed::Fixed(const float val)
{
	(void)val;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::operator float()
{
	return ((float)fixed_val);
}

Fixed& Fixed::operator=(const Fixed& other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
		this->fixed_val = other.getRawBits();
	return *this;
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return fixed_val;
}

void Fixed::setRawBits(const int raw)
{
	fixed_val = raw;
}
