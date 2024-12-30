#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"

class Point
{
public:
	Point();
	Point(const float x, const float y);
	Point(const Point &other);
	~Point();
	Point &operator=(const Point &other);
private:
	const Fixed x;
	const Fixed y;
};

#endif