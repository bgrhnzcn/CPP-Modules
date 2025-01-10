#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"
#include <iostream>

int main()
{
	Character cloud("Cloud");
	Character tifa("Tifa");
	cloud.equip(new Ice());
	cloud.equip(new Cure());
	cloud.equip(new Ice());
	cloud.equip(new Ice());
	tifa.equip(new Ice);
	cloud.use(1, tifa);
	tifa.use(0, cloud);
	tifa.equip(cloud.getMateria(1)->clone());
	tifa.use(1, cloud);
}
