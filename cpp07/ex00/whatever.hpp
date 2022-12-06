#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>
// Ces fonctions doivent pouvoir être appelées avec n’importe quel type d’argument à
// seule condition que ces derniers aient le même type et supportent les opérateurs de comparaison.

// • swap : Intervertit les valeurs de deux arguments donnés. Ne retourne rien.
template<typename T>
void	swap(T &a, T &b)
{
	T	tmp;

	tmp = a;
	a = b;
	b = tmp;
}

// • min : Compare les deux valeurs passées en argument et retourne 
// la plus petite des deux. 
// Si les deux sont équivalentes, alors retourne la seconde.
template<typename T>
T	&min(T &a, T &b)
{
	return (a < b ? a : b);
}

// • max : Compare les deux valeurs passées en argument et retourne
//  la plus grande
// des deux. Si les deux sont équivalentes, alors retourne la seconde.
template<typename T>
T	&max(T &a, T &b)
{
	return (a > b ? a : b);
}

#endif

