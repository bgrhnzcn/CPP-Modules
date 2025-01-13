#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

#include <iostream>

int main()
{
	{
		IMateriaSource* src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());
		ICharacter* me = new Character("me");
		AMateria* tmp;
		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp = src->createMateria("cure");
		me->equip(tmp);
		ICharacter* bob = new Character("bob");
		me->use(0, *bob);
		me->use(1, *bob);
		delete src;
		delete me;
		delete bob;
	}
	{
		Character cloud("Cloud");
		Character tifa("Tifa");
		AMateria* tmp = new Ice();
		cloud.equip(tmp);
		tmp = new Cure();
		cloud.equip(tmp);
		tmp = new Ice();
		cloud.equip(tmp);
		cloud.equip(new Ice());
		tmp = new Cure();
		cloud.equip(tmp);
		delete tmp;
		tmp = new Cure();
		cloud.equip(tmp);
		delete tmp;
		tmp = cloud.getMateria(2);
		cloud.unequip(2);
		tifa.equip(new Ice);
		cloud.use(1, tifa);
		tifa.use(0, cloud);
		tifa.equip(cloud.getMateria(1)->clone());
		tifa.use(1, cloud);
		delete tmp;
	}
}

