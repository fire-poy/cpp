#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template<typename T>
void	divide(T &x)
{
	x /= 2;
}

template<typename T>
void	fun(T &tab)
{
	std::cout << "Tab element: " << tab << std::endl;
}

template<>
void	fun(float &tab)
{
	std::cout << "Tab floats element: " << tab << std::endl;
	tab *= 10;
	std::cout << "Multiplied by 10 = " << tab << std::endl << std::endl;
}

// Implémentez une fonction template iter prenant 3 paramètres et ne retournant rien.
// • Le premier paramètre est l’adresse d’un tableau.
// • Le second est la taille du tableau.
// • Le troisième est une fonction qui sera appelée sur chaque élément du tableau.
template<typename T>
void	iter(T *tab, size_t size, void (*fun)(T &))
{
	if (size < 0)
		return;
	for (size_t i(0); i < size; i++)
		fun(tab[i]);
}

#endif
