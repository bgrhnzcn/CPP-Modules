#include "ClapTrap.hpp"

#include "ScavTrap.hpp"

int main()
{
	ScavTrap asd;
	ClapTrap trap1 = ClapTrap("Real One");
	ScavTrap trap2 = ScavTrap("Scav One");
	trap1.attack("Enemy");
	trap2.attack("Scav Enemy");
	trap2.guardGate();
}
