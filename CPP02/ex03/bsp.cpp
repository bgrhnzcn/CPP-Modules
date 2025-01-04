#include "Point.hpp"

static Fixed	det(const Point a, const Point b, const Point c)
{
	return (b.getY() - a.getY()) * (c.getX() - a.getX()) - (b.getX() - a.getX()) * (c.getY() - a.getY());
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	Fixed area = det(a, b, c);
	Fixed ABP = det(a, b, point);
	Fixed BCP = det(b, c, point);
	Fixed CAP = det(c, a, point);
	if (ABP == 0 || BCP == 0 || CAP == 0)
		return false;
	return (ABP >= 0 && BCP >= 0 && CAP >= 0) || (ABP <= 0 && BCP <= 0 && CAP <= 0);
}
