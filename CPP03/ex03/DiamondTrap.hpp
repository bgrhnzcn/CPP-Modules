#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include <string>

# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
	public:
		// Constructors
		DiamondTrap();
		DiamondTrap(const DiamondTrap& other);
		DiamondTrap(const std::string& name);
		// Destructor
		~DiamondTrap();
	public:
		// Operators
		DiamondTrap &operator=(const DiamondTrap& other);
		void test();
	private:
		std::string m_name;
};

#endif
