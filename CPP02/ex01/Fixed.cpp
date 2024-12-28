#include <iostream>
#include <cmath>

#include "Fixed.hpp"

Fixed::Fixed()
{
	bits = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &other)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

Fixed::Fixed(const int value)
	: bits(value << fract)
{
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float value)
	: bits(roundf(value * (1 << fract)))
{
	std::cout << "Float constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
		bits = other.getRawBits();
	return (*this);
}

int Fixed::getRawBits(void) const
{
	return (bits);
}

void Fixed::setRawBits(const int raw)
{
	bits = raw;
}

int Fixed::toInt(void) const
{
	return (bits >> fract);
}

float Fixed::toFloat(void) const
{
	return ((float)bits / (1 << fract));
}

std::ostream& operator<<(std::ostream& os, const Fixed& fixedPoint)
{
	os << fixedPoint.toFloat();
	return (os);
}
