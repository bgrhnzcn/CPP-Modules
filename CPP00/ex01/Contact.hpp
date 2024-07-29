#pragma once
#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>

class Contact
{
private:
	std::string name;
	std::string surname;
	std::string nickname;
	std::string phone;
	std::string secret;

public:
	Contact();
	Contact(std::string name,
			std::string surname,
			std::string nickname,
			std::string phone,
			std::string secret);
	~Contact();

public:
	void display();
	void printIndexed(int index);
	std::string limitStr(std::string str);

};

#endif
