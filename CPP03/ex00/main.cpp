#include "ClapTrap.hpp"

int main()
{
	ClapTrap trap1 = ClapTrap("Real One");
	trap1.attack("Enemy");
	trap1.setAttackDamage(31);
	trap1.attack("Dalyarak");
	trap1.takeDamage(5);
	trap1.beRepaired(1);
	trap1.beRepaired(1);
	trap1.beRepaired(1);
	trap1.beRepaired(1);
	trap1.beRepaired(1);
	trap1.beRepaired(1);
	trap1.beRepaired(1);
	trap1.beRepaired(1);
	trap1.takeDamage(60);
	trap1.beRepaired(40);
}
