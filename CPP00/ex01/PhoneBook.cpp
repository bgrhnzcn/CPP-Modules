#include "PhoneBook.hpp"
#include <iostream>
#include <cstdlib>

PhoneBook::PhoneBook()
{
	oldestIndex = 0;
}

void PhoneBook::add(Contact newContact)
{
	contacts[oldestIndex] = newContact;
	if (oldestIndex == 7)
		oldestIndex = 0;
	else
		oldestIndex++;
}

void PhoneBook::search()
{
	std::string	selected_index;
	int			index;

	for (int i = 0; i < 8; i++)
		contacts[i].printIndexed(i);
	std::cout << "Select index to display: " << std::flush;
	std::cin >> selected_index;
	for (size_t i = 0; i < selected_index.length(); i++)
	{
		if (!std::isdigit(selected_index[i]))
		{
			std::cout << "Invalid Index. Please use only numerical characters." << std::endl;
			return;
		}
		index = std::atoi(selected_index.c_str());
		if (index > 7 || index < 0)
		{
			std::cout << "Invalid Index. Try between 0-7. (0 and 7 included)" << std::endl;
			return;
		}
	}
	contacts[index].display();
}

PhoneBook::~PhoneBook()
{
}
