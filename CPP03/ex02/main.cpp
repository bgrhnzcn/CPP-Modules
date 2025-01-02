#include "ClapTrap.hpp"

#include "ScavTrap.hpp"

#include "FragTrap.hpp"

int main()
{
	ClapTrap trap1 = ClapTrap("Real One");
	ScavTrap trap2 = ScavTrap("Scav One");
	FragTrap trap3 = FragTrap("Frag One");
	trap1.attack("Enemy");
	trap2.attack("Scav Enemy");
	trap3.attack("Frag Enemy");
	ClapTrap copy1(trap1);
	ScavTrap copy2(trap2);
	FragTrap copy3(trap3);
	copy3.highFivesGuys();
	trap2.guardGate();
	copy1.beRepair(10);
}
