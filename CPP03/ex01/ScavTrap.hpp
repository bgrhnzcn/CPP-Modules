#ifndef SCAV_TRAP_HPP
# define SCAV_TRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : ClapTrap
{
	public:
		//Constructers
		ScavTrap();
		ScavTrap(const ScavTrap& other);
		ScavTrap(const std::string& name);
		//Destructors
		~ScavTrap();
		//Operators
		ScavTrap& operator=(const ScavTrap& other);
	public:
		void guardGate();
};

#endif