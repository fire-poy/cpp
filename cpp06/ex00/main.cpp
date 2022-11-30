#include "StringConversor.hpp"

int main(int ac, char **av)
{
	if (ac == 2)
	{
		StringConversor c(av[1]);
		c.printAll();
	}
	else
		std::cout << "Error: Wrong quantity of arguments. One expected " << std::endl;
}

