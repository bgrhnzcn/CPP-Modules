#include <iostream>
#include <iomanip>

#include "Contact.hpp"

int Contact::setContact()
{
    std::cout << "First Name: ";
    std::getline(std::cin, firstName);
    if (std::cin.eof())
        return (std::cout << std::endl, 1);
    std::cout << "Last Name: ";
    std::getline(std::cin, lastName);
    if (std::cin.eof())
        return (std::cout << std::endl, 1);
    std::cout << "Nickname: ";
    std::getline(std::cin, nickName);
    if (std::cin.eof())
        return (std::cout << std::endl, 1);
    std::cout << "Phone Number: ";
    std::getline(std::cin, phoneNumber);
    if (std::cin.eof())
        return (std::cout << std::endl, 1);
    std::cout << "Darkest Secret: ";
    std::getline(std::cin, darkestSecret);
    if (std::cin.eof())
        return (std::cout << std::endl, 1);
    if (firstName == "" || lastName == "" || nickName == "" || phoneNumber == "" || darkestSecret == "")
        return (std::cout << "Invalid argument!\n", 1);
    return 0;
}

void Contact::displayShort(int index) const
{
    std::cout << "|" << std::setw(10) << index << "|";
    printField(firstName);
    printField(lastName);
    printField(nickName);
    std::cout << std::endl;
}

void Contact::displayFull() const
{
    std::cout << "First Name: " << firstName << std::endl;
    std::cout << "Last Name: " << lastName << std::endl;
    std::cout << "Nickname: " << nickName << std::endl;
    std::cout << "Phone Number: " << phoneNumber << std::endl;
    std::cout << "Darkest Secret: " << darkestSecret << std::endl;
}

void Contact::printField(const std::string &field) const
{
    if (field.length() > 10)
        std::cout << field.substr(0, 9) + ".|";
    else
        std::cout << std::setw(10) << field << "|";
}
