#include <iostream>

#include "Point.hpp"

bool bsp(const Point a, const Point b, const Point c, const Point point);

int main()
{
	unsigned char totalTestCount = 12;
	unsigned char passedTestCount = 0;
	{
		Point a = Point(-1, 0);
		Point b = Point(1, 0);
		Point c = Point(1, 1);
		Point p = Point(1, 0);
		std::cout << "Test1\t Expected: Outside\t| Result: ";
		if (bsp(a, b, c, p))
			std::cout << "Inside" << std::endl;
		else
			std::cout << "Outside" << std::endl, passedTestCount++;
	}
	{
		Point a = Point(-1, 0);
		Point b = Point(1, 0);
		Point c = Point(1, 1);
		Point p = Point(1, 1);
		std::cout << "Test2\t Expected: Outside\t| Result: ";
		if (bsp(a, b, c, p))
			std::cout << "Inside" << std::endl;
		else
			std::cout << "Outside" << std::endl, passedTestCount++;
	}
	{
		Point a = Point(-1, 0);
		Point b = Point(1, 0);
		Point c = Point(1, 1);
		Point p = Point(-1, 0);
		std::cout << "Test3\t Expected: Outside\t| Result: ";
		if (bsp(a, b, c, p))
			std::cout << "Inside" << std::endl;
		else
			std::cout << "Outside" << std::endl, passedTestCount++;
	}
	{
		Point a = Point(-1, 0);
		Point b = Point(1, 0);
		Point c = Point(1, 1);
		Point p = Point(1, 0.5f);
		std::cout << "Test4\t Expected: Outside\t| Result: ";
		if (bsp(a, b, c, p))
			std::cout << "Inside" << std::endl;
		else
			std::cout << "Outside" << std::endl, passedTestCount++;
	}
	{
		Point a = Point(1, 0);
		Point b = Point(-1, 0);
		Point c = Point(1, 1);
		Point p = Point(0.5f, 0.5f);
		std::cout << "Test5\t Expected: Inside\t| Result: ";
		if (bsp(a, b, c, p))
			std::cout << "Inside" << std::endl, passedTestCount++;
		else
			std::cout << "Outside" << std::endl;
	}
	{
		Point a = Point(-1, 0);
		Point b = Point(1, 0);
		Point c = Point(1, 1);
		Point p = Point(0.5f, 0.5f);
		std::cout << "Test6\t Expected: Inside\t| Result: ";
		if (bsp(a, b, c, p))
			std::cout << "Inside" << std::endl, passedTestCount++;
		else
			std::cout << "Outside" << std::endl;
	}
	{
		Point a = Point(3, 28);
		Point b = Point(16, 35);
		Point c = Point(14, -4);
		Point p = Point(10, 24);
		std::cout << "Test7\t Expected: Inside\t| Result: ";
		if (bsp(a, b, c, p))
			std::cout << "Inside" << std::endl, passedTestCount++;
		else
			std::cout << "Outside" << std::endl;
	}
	{
		Point a = Point(3, 28);
		Point b = Point(16, 35);
		Point c = Point(14, -4);
		Point p = Point(1.2f, 2);
		std::cout << "Test8\t Expected: Outside\t| Result: " ;
		if (bsp(a, b, c, p))
			std::cout << "Inside" << std::endl;
		else
			std::cout << "Outside" << std::endl, passedTestCount++;
	}
	{
		Point a = Point(12, 4);
		Point b = Point(1, 3);
		Point c = Point(2, 1);
		Point p = Point(3, 2);
		std::cout << "Test9\t Expected: Inside\t| Result: ";
		if (bsp(a, b, c, p))
			std::cout << "Inside" << std::endl, passedTestCount++;
		else
			std::cout << "Outside" << std::endl;
	}
	{
		Point a = Point(12, 4);
		Point b = Point(-10.7f, -6.6f);
		Point c = Point(-1.7f, -0.9f);
		Point p = Point(-1.2f, -1.4f);
		std::cout << "Test10\t Expected: Inside\t| Result: ";
		if (bsp(a, b, c, p))
			std::cout << "Inside" << std::endl, passedTestCount++;
		else
			std::cout << "Outside" << std::endl;
	}
	{
		Point a = Point(12, 4);
		Point b = Point(-10.7f, -6.6f);
		Point c = Point(-1.7f, -0.9f);
		Point p = Point(-4, -2);
		std::cout << "Test11\t Expected: Outside\t| Result: ";
		if (bsp(a, b, c, p))
			std::cout << "Inside" << std::endl;
		else
			std::cout << "Outside" << std::endl, passedTestCount++;
	}
	{
		Point a = Point(1.057f, 0.907f);
		Point b = Point(1.163f, 0.8803f);
		Point c = Point(0.97f, 0.964f);
		Point p = Point(1.049f, 0.922f);
		std::cout << "Test12\t Expected: Inside\t| Result: ";
		if (bsp(a, b, c, p))
			std::cout << "Inside" << std::endl, passedTestCount++;
		else
			std::cout << "Outside" << std::endl;
	}
	std::cout << "Total Test: " << (int)totalTestCount << ", Passed Test: " << (int)passedTestCount << std::endl;
	return 0;
}
