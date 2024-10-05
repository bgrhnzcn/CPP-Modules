#pragma once
#ifndef ZOMBIE_HPP
 #define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie
{
private:
	std::string name;
public:
	Zombie(void);
	Zombie(std::string name);
	~Zombie(void);
	void announce (void);
	void setName(std::string name);
};

#endif