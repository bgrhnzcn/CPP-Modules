#include "Character.hpp"
#include "AMateria.hpp"

Character::Character()
	: name("Default")
{
	for (int i = 0; i < 4; i++)
		inventory[i] = NULL;
}

Character::Character(const Character& other)
{
	for (int i = 0; i < 4; i++)
		inventory[i] = NULL;
	*this = other;
}

Character::Character(const std::string& name)
	: name(name)
{
	for (int i = 0; i < 4; i++)
		inventory[i] = NULL;
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
		if (inventory[i] != NULL)
			delete inventory[i];
}

Character& Character::operator=(const Character& other)
{
	for (int i = 0; i < 4; i++)
	{	
		if (inventory[i] != NULL)
		{
			delete inventory[i];
			inventory[i] = NULL;
		}
	}
	for (int i = 0; i < 4; i++)
		if (other.inventory[i] == NULL)
			inventory[i] = other.inventory[i]->clone();
	return (*this);
}

void Character::equip(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (inventory[i] == NULL)
		{
			inventory[i] = m;
			return ;
		}
	}
}

const std::string& Character::getName() const
{
	return (name);
}

AMateria* Character::getMateria(int idx) const
{
	if (idx >= 0)
		return (inventory[idx]);
	return (NULL);
}

void Character::unequip(int idx)
{
	if (idx >= 0 && inventory[idx] != NULL)
		inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && inventory[idx] != NULL)
		inventory[idx]->use(target);
}

