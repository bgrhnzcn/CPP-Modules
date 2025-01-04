#include <iostream>

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
	: ClapTrap("ScavDefault")
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
	(void) name;
	this->m_energyPoint = 50;
	this->m_attackDamage = 20;
	std::cout << GREEN "Special Constructor called for ScavTrap" CLEAR << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << RED "Destructor called for ScavTrap" CLEAR << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
	m_name = other.m_name;
	m_hitPoint = other.m_hitPoint;
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

void ScavTrap::attack(const std::string &target)
{
        if (m_hitPoint == 0)
                std::cout
                        << "ScavTrap "
                        << m_name
                        << " can't attack "
                        << target
                        << ", because health is not enough!"
                        << std::endl;
        else if (m_energyPoint == 0)
                std::cout
                        << "ScavTrap "
                        << m_name
                        << " can't attack "
                        << target
                        << ", because energy is not enough!"
                        << std::endl;
        else
        {
                std::cout << GREEN "ScavTrap "
                          << m_name
                          << " attacks "
                          << target
                          << ", causing "
                          << m_attackDamage
                          << " points of damage!" CLEAR
                          << std::endl;
                m_energyPoint--;
        }
}
