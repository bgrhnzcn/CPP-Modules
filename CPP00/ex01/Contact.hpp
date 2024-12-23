#pragma once
#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>

class Contact
{
private:
    std::string firstName;
    std::string lastName;
    std::string nickName;
    std::string phoneNumber;
    std::string darkestSecret;

public:
    int setContact();
    void displayShort(int index) const;
    void displayFull() const;

private:
    void printField(const std::string &field) const;
};

#endif
