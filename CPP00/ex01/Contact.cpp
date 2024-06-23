#include "Contact.hpp"
#include <iostream>
#include <iomanip>

std::string Contact::limitStr(std::string str)
{
	if (str.length() > 10)
		return str.substr(0, 9) + ".";
	return str;
}

void Contact::display()
{
	std::cout << "Name: " << name << std::endl
			  << "Surname: " << surname << std::endl
			  << "Nickname: " << nickname << std::endl
			  << "Phone: " << phone << std::endl
			  << "Secret: " << secret << std::endl;
}

void Contact::printIndexed(int index)
{
	std::cout << "|" << std::setw(1) << index << "|" << std::flush
			  << std::setw(10) << limitStr(name) << "|" << std::flush
			  << std::setw(10) << limitStr(surname) << "|" << std::flush
			  << std::setw(10) << limitStr(nickname) << "|" << std::endl;
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
