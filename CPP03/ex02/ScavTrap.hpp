#ifndef SCAV_TRAP_HPP
# define SCAV_TRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
public: //Constructers
	// Default
	ScavTrap();
	// Copy
	ScavTrap(const ScavTrap& other);
	// Other
	ScavTrap(const std::string& name);
	//Destructor
	~ScavTrap();
public:
	//Operators
	ScavTrap& operator=(const ScavTrap& other);
public: // Member Functions
	void guardGate();
};

#endif
