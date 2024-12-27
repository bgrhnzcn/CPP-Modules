#include "Zombie.hpp"

Zombie*	newZombie(std::string name);

void	randomChump(std::string name);

int	main(void)
{
	Zombie* zombie = newZombie("Undead");
	zombie->announce();
	randomChump("Champ");
	delete zombie;
}

