#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap st;
	ScavTrap j("Juan");
	ScavTrap p("pepe");

	// cl.attack("Handsome Jack");
	// cl.takeDamage(6);
	// cl.beRepaired(4);
	// cl.takeDamage(3);
	// cl.beRepaired(8);
	// cl.beRepaired(1);
	// // cl.attack("A");
	// // cl.attack("B");
	// // cl.attack("C");
	// // cl.attack("D");
	// // cl.attack("E");
	// cl.attack("F");
	// cl.attack("G");
	// cl.beRepaired(1);
	// cl.takeDamage(17);
	// cl.beRepaired(1);
	// cl.beRepaired(1);

	// st.attack("Jhonny");
	// st.takeDamage(6);
	// st.beRepaired(4);
	// st.takeDamage(3);
	// st.beRepaired(8);
	// st.beRepaired(1);
	// st.attack("F");
	// st.attack("G");
	// st.beRepaired(1);
	// st.takeDamage(17);
	// st.beRepaired(1);
	// st.guardGate();
	// st.beRepaired(1);
	// st.takeDamage(100);
	// st.beRepaired(1);
	j.attack("Jhonny");
	j.takeDamage(60);
	j.beRepaired(4);
	j.guardGate();
	std::cout << std::endl;
	j = st;
	j.guardGate();
	j.beRepaired(1);
	j.takeDamage(50);
	j.beRepaired(1);
	j.takeDamage(60);
	j.attack("alfred");
	std::cout << std::endl;
	j = p;
	j.guardGate();
	j.attack("alfred");
	std::cout << std::endl;
	
	ClapTrap a("CARLOS");
	a.attack("alfred");
	a.takeDamage(50);
	a.attack("alfred");
	return 0;
}