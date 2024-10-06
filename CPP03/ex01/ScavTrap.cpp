#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
	: ClapTrap()
{
	m_healthPoint = 100;
	m_energyPoint = 50;
	m_attackDamage = 20;
	std::cout << GREEN "Default Constructor called of ScavTrap" CLEAR << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other)
	: ClapTrap(other)
{
	m_healthPoint = 100;
	m_energyPoint = 50;
	m_attackDamage = 20;
}

ScavTrap::ScavTrap(const std::string& name)
	: ClapTrap(name)
{
	m_healthPoint = 100;
	m_energyPoint = 50;
	m_attackDamage = 20;
}

ScavTrap::~ScavTrap()
{
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
	m_name = other.m_name;
	m_healthPoint = other.m_healthPoint;
	m_energyPoint = other.m_energyPoint;
	m_attackDamage = other.m_attackDamage;
	return *this;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap "
			  << m_name
			  << " is now in Gate keeper mode."
			  << std::endl;
}
