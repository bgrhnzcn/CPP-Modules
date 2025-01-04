#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"

class Point
{
public:
	Point();
	Point(const Fixed x, const Fixed y);
	Point(const Point &other);
	~Point();
	Point &operator=(const Point &other);
	Fixed getX() const;
	Fixed getY() const;
private:
	const Fixed x;
	const Fixed y;
};

#endif
