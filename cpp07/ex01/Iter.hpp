#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template<typename T>
void	fun(T &tab)
{
	std::cout << "Hello from Tab element: " << tab << std::endl;
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
	{
		fun(tab[i]);
		// fun(&tab[i]);
		// fun(tab);
	}
}
void	iter(T tab[], int tab_size, void(*f)(T &))
void	iter(T tab, size_t size, void (*my_function)(T tab))



#endif
