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
	void print(int index);
	Contact();
	Contact(std::string name,
			std::string surname,
			std::string nickname,
			std::string phone,
			std::string secret);
	~Contact();
};

#endif
