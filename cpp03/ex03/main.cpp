#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int	main(void)
{
	DiamondTrap f;
	DiamondTrap z("zoum");

	f.highFivesGuys();
	f.attack("alfred");
	f.takeDamage(5);
	f.beRepaired(5);
	z.takeDamage(100);
	// for (int i = 0; i < 100; i++)
	// {
	// 	f.attack("somebody");	
	// }
	f.takeDamage(100);
	f.attack("somebody");	
	return 0;
}