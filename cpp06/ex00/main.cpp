#include "StringConversor.hpp"

int main(int ac, char **av)
{
	if (ac == 2)
		StringConversor conversor(av[1]);
		conversor.printAll();
	else
		std::cout << "Error: Wrong quantity of arguments. One expected " << std::endl;
}

