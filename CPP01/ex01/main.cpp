#include "Zombie.hpp"

Zombie*	zombieHorde(int n, std::string name);

int	main(void)
{
	int	count = 20;
	Zombie* horde = zombieHorde(count, "Nmae");
	for (int i = 0; i < count; i++)
		horde[i].announce();
	delete []horde;
}