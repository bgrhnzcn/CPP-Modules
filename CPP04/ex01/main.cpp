#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

#include <iostream>

#define ANIMAL_COUNT 10

int main()
{
	{
		Animal *array[ANIMAL_COUNT];
		for (int i = 0; i < ANIMAL_COUNT; i++)
		{
			if (i % 2 == 0)
				array[i] = new Dog();
			else
				array[i] = new Cat();
		}
		for (int i = 0; i < ANIMAL_COUNT; i++)
			delete array[i];
	}
	{
		Dog* dog1 = new Dog();
		Dog* dog2 = new Dog("Crazy dog idea.");
		Cat* cat1 = new Cat();
		Cat* cat2 = new Cat("Crazy cat idea.");
		std::cout << "Before Copy Dog" << std::endl;
		dog1->printIdeas();
		*dog1 = *dog2;
		std::cout << "After Copy Dog" << std::endl;
		dog1->printIdeas();
		std::cout << "Before Copy Cat" << std::endl;
		cat1->printIdeas();
		*cat1 = *cat2;
		std::cout << "After Copy Cat" << std::endl;
		cat1->printIdeas();
		delete dog1;
		delete dog2;
		delete cat1;
		delete cat2;
	}
	return 0;
}

