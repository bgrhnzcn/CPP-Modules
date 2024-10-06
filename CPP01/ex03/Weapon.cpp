#include "Weapon.hpp"

Weapon::Weapon(const std::string& type)
{
	this->type = type;
}

const std::string& Weapon::getType() const
{
	return type;
}

void Weapon::setType(const std::string& new_type)
{
	this->type = new_type;
}