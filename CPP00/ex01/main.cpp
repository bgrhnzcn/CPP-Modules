#include "PhoneBook.hpp"
#include <iostream>

int	main()
{
	std::string input;
	PhoneBook book;
	while(1)
	{
		std::cout << "Select operation:\n1.ADD\n2.SEARCH\n3.EXIT" << std::endl;
		std::cin >> input;
		if (input == "EXIT")
			break;
		if (input == "SEARCH")
			book.search();
		if (input == "ADD")
		{
			std::string name;
			std::cin >> name;
			std::string surname;
			std::cin >> surname;
			std::string nickname;
			std::cin >> nickname;
			std::string phone;
			std::cin >> phone;
			std::string secret;
			std::cin >> secret;
			book.add(Contact(name, surname, nickname, phone, secret));
		}
	}
}
