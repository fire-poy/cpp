#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap cl("pepe");

	cl.attack("Handsome Jack");
	cl.takeDamage(6);
	cl.beRepaired(4);
	cl.takeDamage(3);
	cl.beRepaired(8);
	cl.beRepaired(1);
	// cl.attack("A");
	// cl.attack("B");
	// cl.attack("C");
	// cl.attack("D");
	// cl.attack("E");
	cl.attack("F");
	cl.attack("G");
	cl.beRepaired(1);
	cl.takeDamage(17);
	cl.beRepaired(1);
	cl.beRepaired(1);
	return 0;
}