#pragma once
#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include <sstream>

#include "Contact.hpp"

#define MAX_CONTACTS 8

class PhoneBook
{
private:
    Contact contacts[MAX_CONTACTS];
    int currentIndex;
    int contactCount;

public:
    PhoneBook();
    void addContact();
    void searchContacts() const;
};

#endif
