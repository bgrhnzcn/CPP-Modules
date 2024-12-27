#pragma once
#ifndef HUMANB_HPP
#	define HUMANB_HPP

#	include "Weapon.hpp"

class HumanB
{
public:
	Weapon* weapon;
	std::string name;

public:
	explicit HumanB(const std::string& name);

public:
	void setWeapon(Weapon& new_weapon);
	void attack() const;

};

#endif //HUMANB_HPP

