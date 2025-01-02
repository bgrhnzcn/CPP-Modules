#include <iostream>

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
	: ClapTrap()
{
	this->m_energyPoint = 50;
	this->m_attackDamage = 20;
	std::cout << m_name << ": " GREEN "Default Constructor called for ScavTrap" CLEAR << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other)
	: ClapTrap(other)
{
	this->m_energyPoint = 50;
	this->m_attackDamage = 20;
	std::cout << m_name << ": " GREEN "Copy Constructor called for ScavTrap" CLEAR << std::endl;
}

ScavTrap::ScavTrap(const std::string& name)
	: ClapTrap(name)
{
	this->m_energyPoint = 50;
	this->m_attackDamage = 20;
	std::cout << m_name << ": " GREEN "Special Constructor called for ScavTrap" CLEAR << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << m_name << ": " RED "Desctructor called for ScavTrap" CLEAR << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
	m_name = other.m_name;
	m_hitPoint = other.m_hitPoint;
	m_energyPoint = other.m_energyPoint;
	m_attackDamage = other.m_attackDamage;
	std::cout << m_name << ": " GREEN "Copy Assignment Operator Called for ScavTrap" << CLEAR << std::endl;
	return *this;
}

void ScavTrap::guardGate()
{
	std::cout << m_name << ": ScavTrap is now in Gate keeper mode." << std::endl;
}
