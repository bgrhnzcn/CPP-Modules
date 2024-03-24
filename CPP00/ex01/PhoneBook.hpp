#pragma once
#ifndef PHONE_BOOK_HPP
#define PHONE_BOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
private:
	Contact contacts[8];
	int oldestIndex;
public:
	void add(Contact newContact);
	void search();
	PhoneBook();
	~PhoneBook();
};

#endif
