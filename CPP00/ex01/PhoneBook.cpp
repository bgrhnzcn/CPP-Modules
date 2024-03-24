#include "PhoneBook.hpp"

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
	for (int i = 0; i < 8; i++)
		contacts[i].print(i);
}

PhoneBook::~PhoneBook()
{
}
