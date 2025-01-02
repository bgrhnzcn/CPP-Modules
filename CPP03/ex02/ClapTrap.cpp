#include <iostream>

#include "ClapTrap.hpp"

// Constructors
ClapTrap::ClapTrap()
	: m_name("Default"), m_hitPoint(100), m_energyPoint(10), m_attackDamage(0)
{
	std::cout << m_name << ": " GREEN "Default Constructor called of ClapTrap" CLEAR << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other)
	: m_name(other.m_name), m_hitPoint(other.m_hitPoint)
	, m_energyPoint(other.m_energyPoint), m_attackDamage(other.m_attackDamage)
{
	std::cout << m_name << ": " GREEN "Copy Constructor called of ClapTrap" CLEAR << std::endl;
}

ClapTrap::ClapTrap(const std::string& name)
	: m_name(name), m_hitPoint(100), m_energyPoint(10), m_attackDamage(0)
{
	std::cout << m_name << ": " GREEN "Special Constructor called of ClapTrap" CLEAR << std::endl;
}

// Destructor
ClapTrap::~ClapTrap()
{
	std::cout << m_name << ": " RED "Destructor called of ClapTrap" CLEAR << std::endl;
}

// Operators
ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
	if (this != &other)
	{
		m_name = other.m_name;
		m_hitPoint = other.m_hitPoint;
		m_energyPoint = other.m_energyPoint;
		m_attackDamage = other.m_attackDamage;
	}
	return *this;
}

void ClapTrap::attack(const std::string& target)
{
	std::cout << "ClapTrap "
			  << m_name
			  << " attacks "
			  << target
			  << ", causing "
			  << m_attackDamage
			  << " points of damage!"
			  << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap "
			  << m_name
			  << " took "
			  << amount
			  << " damage!"
			  << std::endl;
}

void ClapTrap::beRepair(unsigned int amount)
{
	std::cout << "ClapTrap "
			  << m_name
			  << " repaired itself "
			  << amount
			  << " damage!"
			  << std::endl;
}

