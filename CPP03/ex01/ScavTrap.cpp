#include <iostream>

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
	: ClapTrap()
{
	this->m_energyPoint = 50;
	this->m_attackDamage = 20;
	std::cout << GREEN "Default Constructor called for ScavTrap" CLEAR << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other)
	: ClapTrap(other)
{
	this->m_energyPoint = 50;
	this->m_attackDamage = 20;
	std::cout << GREEN "Copy Constructor called for ScavTrap" CLEAR << std::endl;
}

ScavTrap::ScavTrap(const std::string& name)
	: ClapTrap(name)
{
	this->m_energyPoint = 50;
	this->m_attackDamage = 20;
	std::cout << GREEN "Special Constructor called for ScavTrap" CLEAR << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << RED "Desctructor called for ScavTrap" CLEAR << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
	m_name = other.m_name;
	m_healthPoint = other.m_healthPoint;
	m_energyPoint = other.m_energyPoint;
	m_attackDamage = other.m_attackDamage;
	std::cout << GREEN "Copy Assignment Operator Called for ScavTrap" << CLEAR << std::endl;
	return *this;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap "
			  << m_name
			  << " is now in Gate keeper mode."
			  << std::endl;
}
