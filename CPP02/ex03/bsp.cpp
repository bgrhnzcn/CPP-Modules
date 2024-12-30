#include "Point.hpp"

static float	line(Point const a, Point const b, Point const c)
{
	return (b.getY() - a.getY()) * (c.getX() - a.getX()) - (b.getX() - a.getX()) * (c.getY() - a.getY());
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	float fAB = line(a, b, point);
	float fBC = line(b, c, point);
	float fCA = line(c, a, point);
	if (fAB == 0 || fBC == 0 || fCA == 0)
		return false;
	return (fAB >= 0 && fBC >= 0 && fCA >= 0) || (fAB <= 0 && fBC <= 0 && fCA <= 0);
}
