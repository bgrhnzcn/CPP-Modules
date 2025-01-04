#include <iostream>
#include <limits>

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
	: m_name("Default"), m_hitPoint(10), m_energyPoint(10), m_attackDamage(0)
{
	std::cout << "Default Constructor called of ClapTrap" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other)
	: m_name(other.m_name), m_hitPoint(other.m_hitPoint)
	, m_energyPoint(other.m_energyPoint), m_attackDamage(other.m_attackDamage)
{
	std::cout << "Copy Constructor called of ClapTrap" << std::endl;
}

ClapTrap::ClapTrap(const std::string& name)
	: m_name(name), m_hitPoint(10), m_energyPoint(10), m_attackDamage(0)
{
	std::cout << "Special Constructor called of ClapTrap" << std::endl;
}

// Destructor
ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called of ClapTrap" << std::endl;
}

// Operators
ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
	this->m_name = other.m_name;
	this->m_attackDamage = other.m_attackDamage;
	this->m_hitPoint = other.m_hitPoint;
	this->m_energyPoint = other.m_energyPoint;
	return *this;
}

void ClapTrap::attack(const std::string& target)
{
	if (m_hitPoint == 0)
		std::cout
			<< "ClapTrap "
			<< m_name
			<< " can't attack "
			<< target
			<< ", because health is not enough!"
			<< std::endl;
	else if (m_energyPoint == 0)
		std::cout
			<< "ClapTrap "
			<< m_name
			<< " can't attack "
			<< target
			<< ", because energy is not enough!"
			<< std::endl;
	else
	{
		std::cout << GREEN "ClapTrap "
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

void ClapTrap::takeDamage(unsigned int amount)
{
	if (m_hitPoint >= amount)
	{
		std::cout << RED "ClapTrap "
			  << m_name
			  << " took "
			  << amount
			  << " damage!" CLEAR
			  << std::endl;
		m_hitPoint -= amount;
	}
	else
	{
		std::cout << RED "ClapTrap "
			  << m_name
			  << " took "
			  << m_hitPoint
			  << " damage!" CLEAR
			  << std::endl;
		m_hitPoint = 0;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (m_hitPoint == 0)
		std::cout
			<< "ClapTrap "
			<< m_name
			<< " can't repair itself, it's too late!"
			<< std::endl;
	else if (m_energyPoint == 0)
		std::cout
			<< "ClapTrap "
			<< m_name
			<< " can't repair"
			<< ", because energy is not enough!"
			<< std::endl;
	else
	{
		std::cout
			<< GREEN "ClapTrap "
			<< m_name
			<< " repaired itself "
			<< amount
			<< " hit points." CLEAR
			<< std::endl;
		m_energyPoint--;
		if (m_hitPoint + amount < m_hitPoint)
			m_hitPoint = std::numeric_limits<unsigned int>::max();
		else
			m_hitPoint += amount;
	}
}

void ClapTrap::setAttackDamage(unsigned int amount)
{
	m_attackDamage = amount;
}
