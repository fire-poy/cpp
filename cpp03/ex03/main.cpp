#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int	main(void)
{
	DiamondTrap f;

	f.highFivesGuys();
	f.attack("alfred");
	f.takeDamage(5);
	f.beRepaired(5);
	f.whoAmI();
	f.takeDamage(110);
	f.attack("somebody");	

	std::cout << "-----zoum-----------" << std::endl;

	DiamondTrap z("zoum");
	z.highFivesGuys();
	z.attack("alfred");
	z.takeDamage(5);
	z.beRepaired(50);
	// std::cout << "----------------" << std::endl;
	// for (int i = 0; i < 100; i++)
	// {
	// 	z.attack("somebody");	
	// }
	// std::cout << "----------------" << std::endl;
	z.whoAmI();
	z.takeDamage(100);
	z.attack("somebody");	

	return 0;
}
