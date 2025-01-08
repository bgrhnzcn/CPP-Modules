#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	Cat cat;
	Dog dog;
	AAnimal *array[100];
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
	{
		array[i]->makeSound();
		delete array[i];
	}
	return 0;
}

