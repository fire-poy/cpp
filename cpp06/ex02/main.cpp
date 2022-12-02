#include <iostream>
#include <cstdlib>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
// Le fichier d’en-tête typeinfo est interdit.
// Fonctions interdites : std::typeinfo

// Elle crée aléatoirement une instance de A, B ou C et la retourne en tant que pointeur sur Base.
Base	*generate()
{
	Base *b = NULL;
	int r = std::rand() % 3;

	switch (r)
	{
		case 0 :
			std::cout << "Class A generated" << std::endl;
			b = new A();
			break;
		case 1 :
			std::cout << "Class B generated" << std::endl;
			b = new B();
			break;
		case 2 :
			std::cout << "Class C generated" << std::endl;
			b = new C();
			break;
	}
	return b;
}

// Elle affiche le véritable type de l’objet pointé par p : "A", "B" ou "C".
void identify(Base *p)
{
	if (dynamic_cast<A *>(p))	
		std::cout << "Pointer: Base class points to A class" << std::endl;
	else if (dynamic_cast<B *>(p))	
		std::cout << "Pointer: Base class points to B class" << std::endl;
	else if (dynamic_cast<C *>(p))	
		std::cout << "Pointer: Base class points to C class" << std::endl;
}

// Elle affiche le véritable type de l’objet pointé par p : "A", "B" ou "C". 
// Utiliser un pointeur dans cette fonction est interdit.
void identify(Base &p)
{
	try
	{
		A &a = dynamic_cast<A &>(p);
		(void)a;
		std::cout << "Reference: Base class points to A class" << std::endl;
	}
	catch(const std::exception& e)
	{
	}
	try
	{
		B &b = dynamic_cast<B &>(p);
		(void)b;
		std::cout << "Reference: Base class points to B class" << std::endl;
	}
	catch(const std::exception& e)
	{
	}
	try
	{
		C &c = dynamic_cast<C &>(p);
		(void)c;
		std::cout << "Reference: Base class points to C class" << std::endl;
	}
	catch(const std::exception& e)
	{
	}
}

// Écrivez un programme pour tester que tout fonctionne comme attendu.
int	main()
{
	std::srand(time(NULL));
	Base *b = NULL;
	
	b = generate();
	identify(b);
	identify(*b);
	delete b;
	std::cout << std::endl;

	b = generate();
	identify(b);
	identify(*b);
	delete b;
}