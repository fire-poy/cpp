// Rendez un fichier main.cpp contenant vos tests.
// Fournissez assez de code pour générer un exécutable de test.
// Votre fonction template iter devra fonctionner avec n’importe quel type de tableau.
// Le troisième paramètre peut être une fonction template instanciée.
#include "Iter.hpp"
	// std::cout << "\n\033[0;91m" << "Rouge" << "\n\033[0;0m\n";
int main ()
{
	std::string s[] = {"Vacherin", "Gruyere", "Appenzeller"};

	std::cout << "\n\033[0;96m" << "Strings" << "\n\033[0;0m\n";
	iter(s, 3, fun);
	// iter<std::string>(s, 3, fun<std::string>);
	// iter(s, 3, fun<std::string>);

	int t[] = {0, 2, 4, 6 ,8};
	std::cout << "\n\033[0;95m" << "Int" << "\n\033[0;0m\n";
	iter(t, 5, fun);

		// int	tab_int[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

	// 	print_tab_int(tab_int, tab_size);
	// 	iter(tab_int, tab_size, mult_by_10);
	// 	print_tab_int(tab_int, tab_size);

	// 	iter(tab_int, tab_size, fun);
	// }

	// std::cout << "-------- STRINGS ----------" << std::endl;
	// {
	// 	std::string tab_string[10] = {
	// 		"This",
	// 		"CPP",
	// 		"Piscine",
	// 		"Is",
	// 		"Very",
	// 		"Veryyyyyy",
	// 		"Much",
	// 		"Too",
	// 		"Long",
	// 		"!!!!!!!!!!!!!!!!"};

	// 	iter(tab_string, tab_size, fun);
	// }
	// return 0;
}
