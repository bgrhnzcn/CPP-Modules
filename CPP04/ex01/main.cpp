#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	Cat cat;
	Dog dog;
	Animal *array[100];
	for (int i = 0; i < 100; i++)
	{
		if (i % 2 == 0)
		{
			array[i] = new Dog();
			*array[i] = dog;
		}
		else
		{
			array[i] = new Cat();
			*array[i] = cat;
		}
	}
	for (int i = 0; i < 100; i++)
		delete array[i];
	return 0;
}

