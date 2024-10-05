#pragma once
#ifndef FIXED_HPP
#define FIXED_HPP

class Fixed
{
private:
	static const int fract = 8;
	int fixed_val;

public:
	Fixed();
	Fixed(const Fixed& fixed);
	Fixed(const int val);
	Fixed(const float val);
	~Fixed();
	operator float();
	Fixed& operator=(const Fixed& fixed);

public:
	int getRawBits(void) const;
	void setRawBits(const int raw);
};

#endif