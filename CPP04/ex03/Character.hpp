#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"

class Character : public ICharacter
{
public:
	Character();
	Character(const Character& other);
	Character(const std::string& name);
	~Character();
	Character& operator=(const Character& other);
public:
	const std::string& getName() const;
	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);
private:
	AMateria* inventory[4];
	std::string name;
};

#endif
