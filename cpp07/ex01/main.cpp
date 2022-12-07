// Rendez un fichier main.cpp contenant vos tests.
// Fournissez assez de code pour générer un exécutable de test.
// Votre fonction template iter devra fonctionner avec n’importe quel type de tableau.
// Le troisième paramètre peut être une fonction template instanciée.
#include "iter.hpp"

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
	iter(t, 5, divide);

	std::cout << "\n\033[0;95m" << "Divided by 2" << "\n\033[0;0m\n";
	iter(t, 5, fun);

	float f[] = {0.5, 2.4, 4.3, 6.8 ,8.9};
	std::cout << "\n\033[0;95m" << "Divided by 2" << "\n\033[0;0m\n";
	iter(f, 5, divide);
	iter(f, 5, fun);
	std::cout << "\n\033[0;91m" << "Float" << "\n\033[0;0m\n";
	iter(f, 5, fun);
	return 0;
}
