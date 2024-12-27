#pragma once
#ifndef WEAPON_HPP
#	define WEAPON_HPP

#	include <string>

class Weapon
{
private:

	std::string type;
public:
	explicit Weapon(const std::string& type);
public:
	const std::string& getType() const;
	void setType(const std::string& new_type);
};

#endif // WEAPON_HPP

