#include "Phonebook.hpp"

PhoneBook::PhoneBook()
{
    currentIndex = 0;
    contactCount = 0;
}

void PhoneBook::addContact()
{
    if (contacts[currentIndex].setContact() == 1)
        return ;
    currentIndex = (currentIndex + 1) % MAX_CONTACTS;
    if (contactCount < MAX_CONTACTS)
        contactCount++;
}

int check_input(std::string input)
{
    for (size_t i = 0; i < input.length(); i++)
        if (!(input[i] >= '0' && input[i] <= '9'))
            return (1);
    return (0);
}

void PhoneBook::searchContacts() const
{
    std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
    std::cout << "---------------------------------------------" << std::endl;
    if (contactCount == 0)
        return ;
    for (int i = 0; i < contactCount; i++)
        contacts[i].displayShort(i);
    std::cout << "Enter the index of the contact: ";
    std::string input;
    std::getline(std::cin, input);
    if (std::cin.eof())
        return ;
    int index = -1;
    if (check_input(input))
    {
        std::cout << "Invalid index\n";
        return ;
    }
    std::stringstream(input) >> index;
    if (index >= 0 && index < contactCount)
        contacts[index].displayFull();
    else
        std::cout << "Invalid index!" << std::endl;
}
