#include <iostream>
#include <cmath>

#include "Fixed.hpp"

Fixed::Fixed()
{
	bits = 0;
}

Fixed::Fixed(const Fixed &other)
{
	*this = other;
}

Fixed::Fixed(const int value)
	: bits(value << fract)
{
}

Fixed::Fixed(const float value)
	: bits(roundf(value * (1 << fract)))
{
}

Fixed::~Fixed()
{
}

//--------------------------------OPERATORS-------------------------------------

Fixed &Fixed::operator=(const Fixed &other)
{
	if (this != &other)
		bits = other.getRawBits();
	return (*this);
}

bool Fixed::operator<(const Fixed &other) const
{
	if (this->toFloat() < other.toFloat())
		return true;
	return false;
}

bool Fixed::operator>(const Fixed &other) const
{
	if (this->toFloat() > other.toFloat())
		return true;
	return false;
}

bool Fixed::operator<=(const Fixed &other) const
{
	if (this->toFloat() <= other.toFloat())
		return true;
	return false;
}

bool Fixed::operator>=(const Fixed &other) const
{
	if (this->toFloat() >= other.toFloat())
		return true;
	return false;
}

bool Fixed::operator==(const Fixed &other) const
{
	if (this->toFloat() == other.toFloat())
		return true;
	return false;
}

bool Fixed::operator!=(const Fixed &other) const
{
	if (this->toFloat() != other.toFloat())
		return true;
	return false;
}

Fixed Fixed::operator+(const Fixed &other)
{
	return (Fixed(this->toFloat() + other.toFloat()));
}

Fixed Fixed::operator-(const Fixed &other)
{
	return (Fixed(this->toFloat() - other.toFloat()));
}

Fixed Fixed::operator*(const Fixed &other)
{
	return (Fixed(this->toFloat() * other.toFloat()));
}

Fixed Fixed::operator/(const Fixed &other)
{
	return (Fixed(this->toFloat() / other.toFloat()));
}

Fixed &Fixed::operator++()
{
	bits++;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed temp = *this;
	this->bits++;
	return (temp);
}

Fixed &Fixed::operator--()
{
	bits--;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed temp = *this;
	temp.bits--;
	return (temp);
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

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	if (a < b)
		return (a);
	return (b);
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a < b)
		return (a);
	return (b);
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	if (a > b)
		return (a);
	return (b);
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a > b)
		return (a);
	return (b);
}

std::ostream& operator<<(std::ostream& os, const Fixed& fixedPoint)
{
	os << fixedPoint.toFloat();
	return (os);
}
