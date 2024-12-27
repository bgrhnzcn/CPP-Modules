#pragma once
#ifndef HUMANA_HPP
#	define HUMANA_HPP

#	include "Weapon.hpp"

class HumanA
{
public:
	Weapon& weapon;
	std::string name;

public:
	HumanA(const std::string &name, Weapon& new_weapon);

public:
	void attack() const;

};

#endif //HUMANA_HPP

