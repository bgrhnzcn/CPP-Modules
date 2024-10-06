#include "ClapTrap.hpp"


// Constructors
ClapTrap::ClapTrap()
	: m_name("Default"), m_healthPoint(10), m_energyPoint(10), m_attackDamage(0)
{
	std::cout << GREEN "Default Constructor called of ClapTrap" CLEAR << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& copy)
	: m_name(copy.m_name), m_healthPoint(copy.m_healthPoint)
	, m_energyPoint(copy.m_energyPoint), m_attackDamage(copy.m_attackDamage)
{
	(void) copy;
	std::cout << GREEN "Copy Constructor called of ClapTrap" CLEAR << std::endl;
}

ClapTrap::ClapTrap(const std::string& name)
	: m_name(name), m_healthPoint(10), m_energyPoint(10), m_attackDamage(0)
{
	std::cout << GREEN "Special Constructor called of ClapTrap" CLEAR << std::endl;
}

// Destructor
ClapTrap::~ClapTrap()
{
	std::cout << RED "Destructor called of ClapTrap" CLEAR << std::endl;
}


// Operators
ClapTrap& ClapTrap::operator=(const ClapTrap& assign)
{
	(void) assign;
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

