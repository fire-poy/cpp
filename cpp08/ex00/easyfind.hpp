#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <algorithm>
// Partant du principe que T est un container d’entiers, cette fonction
//  doit trouver la première occurrence du second paramètre dans le premier
//   paramètre.
template<typename T>
typename T::iterator	easyfind(T &cont, int n)
{
	typename T::iterator	it; 

	it = std::find(cont.begin(), cont.end(), n);
	return it;
}
// Si aucune occurrence n’a été trouvée, vous pouvez soit jeter une 
// exception, soit retourner une valeur d’erreur de votre choix. Si vous avez
//  besoin d’inspiration, jetez un oeil au comportement des containers standards.

#endif
