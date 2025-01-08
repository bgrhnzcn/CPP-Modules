#include <iostream>

#include "DiamondTrap.hpp"

// Constructors
DiamondTrap::DiamondTrap()
	: ScavTrap(), FragTrap(), m_name("Default")
{
	ClapTrap::m_name = m_name + "_clap_name";
	m_attackDamage = FragTrap::m_attackDamage;
	m_hitPoint = FragTrap::m_hitPoint;
	m_energyPoint = ScavTrap::m_energyPoint;
	std::cout << m_name << ": " GREEN "Default Constructor called of DiamondTrap" CLEAR << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& other)
	: ScavTrap(other), FragTrap(other), m_name(other.m_name)
{
	std::cout << m_name << ": " GREEN "Copy Constructor called of DiamondTrap" CLEAR << std::endl;
}

DiamondTrap::DiamondTrap(const std::string& name)
	: ClapTrap(name + "_clap_name"), m_name(name)
{
	std::cout << m_name << ": " GREEN "Special Constructor called of DiamondTrap" CLEAR << std::endl;
}

// Destructor
DiamondTrap::~DiamondTrap()
{
	std::cout << m_name << ": " RED "Destructor called of DiamondTrap" CLEAR << std::endl;
}

// Operators
DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other)
{
	if (this != &other)
	{
		m_name = other.m_name;
		FragTrap::m_hitPoint = other.FragTrap::m_hitPoint;
		ScavTrap::m_energyPoint = other.ScavTrap::m_energyPoint;
		FragTrap::m_attackDamage = other.FragTrap::m_attackDamage;
	}
	return *this;
}

void DiamondTrap::test()
{
	std::cout << this->FragTrap::m_name << std::endl;
	this->ScavTrap::m_name = "Faata";
	std::cout << this->FragTrap::m_name << std::endl;
}
