#pragma once
#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
public: // Constructers
	// Default
	FragTrap();
	// Copy
	FragTrap(const FragTrap &other);
	// Special
	FragTrap(const std::string &name);
	// Destructer
	~FragTrap();
public:
	FragTrap &operator=(const FragTrap &other);
public:
	void highFivesGuys(void);
};

# endif
