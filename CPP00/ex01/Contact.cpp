#include "Contact.hpp"
#include <iostream>

void Contact::print(int index)
{
	std::cout << index << ", " << name << ", " << surname << ", " << nickname << std::endl;
}

Contact::Contact(std::string name, std::string surname, std::string nickname, std::string phone, std::string secret)
{
	this->name = name;
	this->surname = surname;
	this->nickname = nickname;
	this->phone = phone;
	this->secret = secret;
}

Contact::~Contact()
{
}

Contact::Contact()
{
}
