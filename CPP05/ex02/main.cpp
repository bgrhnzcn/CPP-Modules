#include <iostream>

#include "Bureaucrat.hpp"

int main(void)
{
	try
	{
		Bureaucrat bro1("Bro1", 15);
		std::cout << bro1;
		Bureaucrat bro3("Bro3", 0);
		std::cout << bro3;
		Bureaucrat bro2("Bro2", 199);
	}
	catch (const std::exception& e)
	{
		std::cout << "Constructer Failed." << std::endl;
		std::cout << e.what() << std::endl;
	}
	std::cout << "" << std::endl;
	return (0);
}
