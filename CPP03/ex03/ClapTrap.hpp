#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <string>

#define GREEN "\033[0;32m"
#define RED "\033[0;31m"
#define CLEAR "\033[0m"

class ClapTrap
{
	public:
		// Constructors
		ClapTrap();
		ClapTrap(const ClapTrap& other);
		ClapTrap(const std::string& name);
		// Destructor
		~ClapTrap();
	public:
		// Operators
		ClapTrap &operator=(const ClapTrap& other);
	public:
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepair(unsigned int amount);
	protected:
		std::string m_name;
		int m_hitPoint;
		int m_energyPoint;
		unsigned int m_attackDamage;
};

#endif
