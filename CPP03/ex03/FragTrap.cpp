#include <iostream>

#include "FragTrap.hpp"

FragTrap::FragTrap()
	: ClapTrap()
{
	m_energyPoint = 100;
	m_attackDamage = 30;
	std::cout << m_name << ": " GREEN "Default Constructer called for FragTrap" CLEAR << std::endl;
}

FragTrap::FragTrap(const std::string &name)
	: ClapTrap(name)
{
	m_energyPoint = 100;
	m_attackDamage = 30;
	std::cout << m_name << ": " GREEN "Special Constructer called for FragTrap" CLEAR << std::endl;
}

FragTrap::FragTrap(const FragTrap &other)
	: ClapTrap(other)
{
	m_name = other.m_name;
	m_hitPoint = other.m_hitPoint;
	m_energyPoint = other.m_energyPoint;
	m_attackDamage = other.m_attackDamage;
	std::cout << m_name << ": " GREEN "Copy Constructer Called for FragTrap" CLEAR << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &other)
{
	if (this != &other)
	{
		m_name = other.m_name;
		m_hitPoint = other.m_hitPoint;
		m_energyPoint = other.m_energyPoint;
		m_attackDamage = other.m_attackDamage;
	}
	std::cout << m_name << ": " "Copy Assignment Operator Called for FragTrap" << std::endl;
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << m_name << ": " RED "Destructer Called for FragTrap" CLEAR << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << m_name << ": " "Up High, Down Low!" << std::endl;
}

