#pragma once
#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <string>

# define GREEN "\033[0;32m"
# define RED "\033[0;31m"
# define CLEAR "\033[0m"

class ClapTrap
{
	public: // Constructors
		// Default
		ClapTrap();
		// Copy
		ClapTrap(const ClapTrap& other);
		// Others
		ClapTrap(const std::string& name);
		// Destructor
		~ClapTrap();
	public: // Operators
		// Copy Assignmet Operator
		ClapTrap &operator=(const ClapTrap& other);
	public: // Member Functions
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
	public:
		void setAttackDamage(unsigned int amount);
	private: //Fields
		std::string m_name;
		unsigned int m_hitPoint;
		unsigned int m_energyPoint;
		unsigned int m_attackDamage;
};

#endif
